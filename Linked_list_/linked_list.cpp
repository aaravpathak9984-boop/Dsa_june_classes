#include <bits/stdc++.h>

using namespace std;

// how to create a single node

class Node{
public:
	int data;
	Node* next;

	//constructor

	Node(int x){

		data=x;
		next=NULL;

	}
};

int main(){


// create new node

Node* one=new Node(19);

// one -> next="x16fbjbfljj";


cout<<one -> data<<endl;
cout<<one -> next<<endl;
	


return 0;

}