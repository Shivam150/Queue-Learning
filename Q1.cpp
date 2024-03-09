#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;
	
	
	cout<<"Size of Queue is : "<<q.size()<<endl;
	q.push(10);
	q.push(20);
	q.push(30);
	
	cout<<"Size of Queue is : "<<q.size()<<endl;
	cout<<"Front element of an queue: "<<q.front()<<endl;
	cout<<"Back element of an queue: "<<q.back()<<endl;
	q.pop();
	cout<<"Size of Queue is : "<<q.size()<<endl;
	cout<<"Front element of an queue: "<<q.front()<<endl;
	cout<<"Back element of an queue: "<<q.back()<<endl;
}