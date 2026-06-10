#include <bits/stdc++.h>

using namespace std;

// Class blueprint for a single Node
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function for printing linked list
void printlist(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// insert from front
void insF(Node*& x, Node*& head) {
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    x->next = head;
    head = x;
}

// delete from front
void delf(Node*& head) {
    Node* temp = head;
    head = (head->next);
}

// insert from back
void insE(Node*& x, Node*& head) {
    if (head == NULL) {
        head = x;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = x;
}

// delete from back
void delb(Node*& head) {
    Node* temp = head;
    while ((temp->next)->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

// insert at any position
void ip(Node*& x, Node*& head, int pos) {
    if (pos == 1) {
        x->next = head;
        head = x;
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while (temp != NULL && cnt < (pos - 1)) {
        temp = temp->next;
        cnt++;
    }
    x->next = temp->next;
    temp->next = x;
}

// delete from any position
void dfp(Node*& head, int posn) {
    int cnt = 1;
    Node* temp = head;
    while (temp != NULL && cnt < (posn - 1)) {
        temp = temp->next;
        cnt++;
    }
    temp->next = (temp->next)->next;
}

// searching a key
bool search(Node*& head, int key) {
    bool ans = false;
    Node* temp = head;
    while (temp != NULL) {
        if (key == temp->data) {
            ans = true;
            break;
        }
        temp = temp->next;
    }
    return ans;
}

//finding posn of a key (index 1 based):

int index(Node*& head,int key){
  int posn=1;
  int ans=0;

  Node* temp= head;
  while(temp !=NULL){
    if(key==temp->data){
      ans=1;
      break;
    }
    posn++;
    temp=temp->next;
  }
      if (ans == 0) {
        return -1;
    }

  return posn;


} 

// finding length of linked list
int len(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}


//reversing a linked list

void rev(Node*& head){

  Node* pr=NULL;
  Node* c=head;
  Node* fo=NULL;


  while(c!=NULL){


    fo=c->next;
    c->next=pr;

    pr=c;
    c=fo;

  }
head=pr;


}


int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    // Creating initial linked list using for loop
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;

        Node* newnode = new Node(val);

        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

  // insert Front
  Node* newn = new Node(11);
  insF(newn, head);
  printlist(head);

 // insert End
 Node* newn2 = new Node(60);
 insE(newn2, head);
 printlist(head);

 // insert Position
 Node* new3 = new Node(25);
 ip(new3, head, 4);
 printlist(head);

// delete Front
 delf(head);
 printlist(head);

 // delete Back
 delb(head);
 printlist(head);

 //find a key

 cout<<search(head,30)<<endl;

 //len of list

 cout<<len(head)<<endl;

 //key posn

 cout<<index(head,21)<<endl;

//reverse the list

rev(head);
printlist(head);




}
