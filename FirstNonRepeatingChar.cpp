#include<bits/stdc++.h>
using namespace std;

string FirstNonRepeatingchar(string A ) {
	unordered_map<char, int> count;
	
	queue<char> q;
	string ans = "";
	
	for(int i =0; i<A.length();i++){
		char ch  = A[i];
		count[ch]++; // increase count of character
		
		q.push(ch); // push character to queue
		
		
		while(!q.empty()){
			if(count[q.front()] > 1){  // means repeating
					q.pop();
			}else {
				ans.push_back(q.front());
				break;
			}
		}
		
		if(q.empty()){
			ans.push_back('#');	
		}
		
	}
	
	return ans;
	
}




int main(){
	string a = "aabc";
	string b = FirstNonRepeatingchar(a);
	
	cout<<b<<endl;
}