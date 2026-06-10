#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>>n;

stack<int>s;

vector<int> v(n),b(n,-1);

for(int i=0;i<n;i++){
	cin>>v[i];
	
}




for(int i=n-1;i>=0;i--){

	while(!s.empty() && s.top()<=v[i]){
		s.pop();
	}

	if(!s.empty()){
		b[i]=s.top();
	}

	s.push(v[i]);



}

for(auto x:b)cout<<x<<" ";



}
