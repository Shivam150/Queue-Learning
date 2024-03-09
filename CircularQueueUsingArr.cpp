#include<bits/stdc++.h>
using namespace std;

class CircularQueue {
	int *arr ;
	int front;
	int rear;
	int size;
	
	public:
		CircularQueue(int n){
			size = n;
			front = rear = -1;
			arr = new int[size];
		}
		
	void push(int data){
		// checkis space is available or not;
		if((front == 0 && rear == size-1) || rear == (front-1)%(size-1)){
			cout<<"Queue is full or space available"<<endl;
		}else if(front == -1) {
			// checking for first element - like in starting there is no element
			front = rear = 0;  // Initially we set at index 0 to push first element at 0.
		} else if(rear == size-1 && front != 0){
			// checking that rear is reached at end  but front is at first index or at starting position that mean the front is somewhere in middle so move rear to start to maintain the 
			// - circular Queue.
			rear = 0;
		}else {  // this the normal case to move rear further to push new element
			rear++;
		}
		
		arr[rear] = data; // after checking all the cases push the element at back or at rear.
		
	}
	
	
	int pop() {
		// check that queue should not be empty 
		if(front == -1){ // front at -1 so queue is empty
			return -1;
		}
		
		// store value and insert -1 at that index 
		int ans = arr[front];
		arr[front] = -1;
		
		// check if there only one element in the queue 
		if(front == rear){
			front = rear = -1; // then made empty
		} else if(front == size-1){ // to maintain cyclic nature.
			front = 0;
		}else {
			front++;
		}
		
		return ans;
		 
	}
};




int main() {
	CircularQueue Cq = CircularQueue(5);
	
	Cq.push(10);
	
	Cq.push(15);
	
	cout<<"Removed element is: "<<Cq.pop()<<endl;
}