#include<iostream>
using namespace std;
struct Node{
  int data;
  struct Node *next;
}
class LinkedList
{
public:
  struct Node *head = NULL;
  void traverse();
  void insertAtFront();
  void insertAtEnd();
}
void LinkedList::traverse(struct Node *head)
{
  struct Node *ptr = head;
  while(ptr != NULL){
    cout<<ptr->data<<" ";
    ptr = ptr->next;
  }
  cout<<endl;
}
int main(){
  
}