#include<bits/stdc++.h>
using namespace std;
vector<int> firstNegative(vector<int> arr, int n, int k) {
	 vector<int> ans;
	 deque<int> dq;
     // process first k element
	 for(int i=0; i<k;i++){
		 if(arr[i] <0){
			 dq.push_back(i);
		 }
	 }

     // store ans for first k size
	 if(dq.size() > 0){
		 ans.push_back(arr[dq.front()]);
	 }else{
		 ans.push_back(0);
	 }

	 // process fo remaining windows

	 for(int i=k;i<n;i++){
		 // removal
		 if(!dq.empty() && i-dq.front() >= k){
			 dq.pop_front();
		 }

		 // addition 
		 if(arr[i] < 0){
			 dq.push_back(i);
		 }

		 // store ans 
		 if(dq.size() > 0){
		    ans.push_back(arr[dq.front()]);
	     }else{
		    ans.push_back(0);
	     }
	 }

	 return ans;
}





int main() {
	vector<int> arr;
	
}