#include<bits/stdc++.h>
using namespace std;

class Queue {
	int * arr;
	int front;
	int rear;
	int size;
	
	public:
		
	    Queue(int n){
	    	size = n;
	    	front =0;
	    	rear = 0;
	    	arr = new int[size];
	    }
	    
	    
	    void push(int data){
	    	// check space availabel or not in  enquque;
	    	if(rear == size){
	    		cout<<"Queue is full"<<endl;
			}else{
				arr[rear] = data;
				rear++;
			}
		}
		
		int pop() {
			// check that queue should not empty
			if(isEmpty()){
				return -1;
			}else {
				int ans = arr[front];
				arr[front] = -1;
				front++;
				
				if(front == rear){ //means we reached to end of queue by doing pop operation so queue is now empty  
					front = 0;
					rear  = 0;
				}
				
				return ans;
			}
		}
		
		
		int start() {
			if(isEmpty()){
				return -1;
			}else {
				return arr[front];
			}
		}
		
		int back() {
			if(isEmpty()){
				return -1;
			}else {
				return arr[rear-1];
			}
		}
		
		
		
		bool isEmpty() {
			if(front == rear){
				return true;
			}else{
				return false;
			}
		}
		
		int Size(){
			if(isEmpty()){
				return 0;
			}else {
				return rear;
			}
		}
};


int main(){
	Queue q = Queue(10);

    int x = 5;
     while(x != 30){
     	q.push(x);
     	
     	x += 5;
	 }
	
	cout<<"Size of queue is: "<<q.Size()<<endl;
	cout<<"front element of queue: "<<q.start()<<endl;
	cout<<"back element of queue: "<<q.back()<<endl;
	
}