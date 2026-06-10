#include <bits/stdc++.h>

using namespace std;

class Node{

public:
	int data;
	Node* next;

   Node(int x){

   	data=x;
   	next=NULL;

   }

};

class Stack
{

Node* top;
int size;

public:
	Stack(){
		size=0;
		top=NULL;
	}

	void push(int x){

		Node* temp=new Node(x);

		size++;

		temp->next=top;
		top=temp;
	}

	void pop(){

		if(top==NULL)return;

		Node* temp= top;
		size--;

		top=top->next;

		delete temp;

	}

	int peek(){

		return top->data;
	}

	bool isEmpty(){

		return top==NULL;
	}

	void display(){

		Node* temp=top;

		while(temp!=NULL){

			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}

	void input(int n){

		for(int i=0;i<n;i++){
			int val;
			cin>>val;

			Node* newn=new Node(val);

			
		}
	}


	

};

int main(){

	Stack s;
	s.push(4);
	s.push(6);
	s.push(12);
	s.push(15);

	s.display();

	s.pop();
	s.display();

	cout<<s.isEmpty()<<endl;

	cout<<s.peek()<<endl;

	


}