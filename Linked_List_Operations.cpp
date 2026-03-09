#include <iostream>
using namespace std;

class Node{
  public:
    int data; //the data part of the node.

    Node* next;  // the next pointer of the node.

    Node(int a){  //this the fist initial node or head.
      data = a;
      next = nullptr;
    }
};

 //function to add node in the front on list.
    void insertFront(Node*& head, int a){
      //create new nodes
      Node* newNode = new Node(a);

      //assign head address to new Node
      newNode->next = head;

      //assign head to new Node
      head = newNode;
    }

int main(){

  //make the linked list by  creating nodes.
  Node* h = new Node(10);    // head is the first node.
  Node* n1 = new Node(20);
  Node* n2 = new Node(30);
  Node* n3 = new Node(40);
  Node* n4 = new Node(150);
  Node* n5 = new Node(160);
  Node* n6 = new Node(170);
  Node* n7 = new Node(180);

  //link the nodes
  h->next=n1;
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  n5->next = n6;
  n6->next = n7;
  //n7 is the last node and has null ponter already in the class.

  insertFront(h, 1001);

  //print he list.
  Node* v = h;
  while(v != nullptr){
    cout <<v->data<<" --> ";
    v=v->next;
  }
  cout<<"O";




  return 0;
}
