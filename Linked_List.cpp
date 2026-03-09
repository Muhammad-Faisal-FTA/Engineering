
#include <iostream>
using namespace std;
//node
class Node{
  public:
    int data; //data block of node

    Node* next; //this tghe next ponter for nrxt node location

    Node(int a){
      data = a;
      next = nullptr;
    }
};


int main()
{
  Node* Head = new Node(10);
  Node* second = new Node(20);

  Head->next  = second;
  second->next = nullptr;

  Node* c=Head;

  while(c != nullptr){
    cout << c->data << "->";
    c = c->next;
  }
  cout << c->data << "😀 m";


    return 0;
}
