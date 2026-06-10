#include <bits/stdc++.h>
using namespace std;


int main(){

	string s;
	cin>>s;

	stack<char>st;

	int ans=1;

	for(char ch:s){

		if(ch=='{'|| ch=='(' || ch=='[')st.push(ch);

		else{

			if(st.empty())ans=0;

			if(ch=='}'&& st.top()!='{')ans=0;

			if(ch==')'&& st.top() !='(')ans=0;

			if(ch==']'&& st.top()!=']')ans=0;

			st.pop();


		}

	}


if(st.empty())cout<<"YES";
else cout<<"NO";



}