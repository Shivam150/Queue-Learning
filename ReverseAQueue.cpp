#include<bits/stdc++.h>
using namespace std;


queue<int> reverseQueue(queue<int> q)
{
    stack<int> S;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        S.push(element);
    }

    while(!S.empty()) {
        int element = S.top();
        S.pop();
        q.push(element);
    }

    return q;
}


int main(){
	queue<int> Q;
	
	Q.push(10);
	Q.push(20);
	Q.push(30);
	Q.push(40);
	Q.push(50);
	
	Q = reverseQueue(Q);
	
	
	cout<<"After Reverser: "<<endl;
	while(!Q.empty()){
		cout<<Q.front()<<" ";
		Q.pop();
	}
	cout<<endl;
}