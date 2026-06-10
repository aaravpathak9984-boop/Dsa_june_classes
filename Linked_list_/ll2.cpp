#include <bits/stdc++.h>

using namespace std;

//to create a node using class

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


	//creating nodes

	Node* one=new Node(10);
	Node* two=new Node(20);
	Node* thr=new Node(30);
	Node* four=new Node(40);


	one -> next=two;
	two -> next=thr;
	thr -> next=four;

	Node* head=one;


// insertion of node in starting 


  Node* opec=new Node(11); //step 1 -> defining new node

  opec -> next=head; // step 2 -> assigning add of first node one

  head= opec; //step 3->  making point to the head and breaking the prev connctn;

    Node* i=head;




int len=0;

  while(i!=NULL){

  	cout<<i -> data <<" ";
  	i = i->next;



  	len++;
  }


cout<<endl<<len<<endl;


return 0;

}
	


