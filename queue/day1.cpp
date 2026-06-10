#include <bits/stdc++.h>
using namespace std;

class Stack{
private:
	// konsa use kroge ds for implementation

	int arr[1000];

	int top=-1;



public:

	//methods

	//push

	void push(int x){
		top++;
		arr[top]=x;
	}


	//pop

	void pop(){

		if(top!=-1)top--;	
	}
	//size

	int sz(){
		return top+1;
	}
	//top

	int Top(){
		return arr[top];
	}
	//isEmpty

	bool isEmpty(){
		return top==-1;

	}
	//isFull

	bool isFull(){
		if(top==999)return true;
		return false;
	}







};

int main(){

	Stack s;

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		s.push(a);
	}

	
	cout<<"size of stack : "<<s.sz()<<endl;
	cout<<"Top element of stack : "<<s.Top()<<endl;

	while(!s.isEmpty()){
		cout<<s.Top()<<endl;
		s.pop();
	}

	return 0;

}

