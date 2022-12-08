#include<iostream>
using namespace std;
struct Node{
  int data;
  struct Node *next;
};
class LinkedList
{
public:
  LinkedList(int data){
    head = new struct Node;
    head->data = data;
    head->next = NULL;
  }
  struct Node *head = NULL;
  void traverse(){
    cout<<":: Traversing the Linked List: ...\n";
    if(head == NULL)
    {
      cout<<"* Empty Linked List"<<endl;
      return;
    }
    struct Node *ptr = head;
    while(ptr != NULL){
      cout<<ptr->data<<"->";
      ptr = ptr->next;
    }
    cout<<endl<<":: Traversing Completed"<<endl;
  }
  void insertAtFront(int data){
    cout<<":: Inserting element ("<<data<<") at front: ...\n";
    if(head == NULL)
    {
      cout<<"* Empty Linked List"<<endl;
      //return;
    }
    struct Node *elem = new struct Node;
    if(elem == NULL)
    {
      cout<<"* Memory allocation failed"<<endl;
      return;
    }
    elem->data = data;
    elem->next = head;
    head = elem;
    cout<<":: Insertion Completed\n";
  }
  void insertAtEnd(int data){
    cout<<":: Inserting element("<<data<<") at end\n";
    if (head == NULL)
    {
      cout<<"* Empty LinkedList\n";
      //return;
      insertAtFront(data);
      return;
    }
    struct Node *elem = new struct Node,*ptr;
    if(elem == NULL){
      cout<<"* Memory allocation failed"<<endl;
      return;
    }
    elem-> data = data;
    ptr = head;
    while(ptr->next != NULL){
      ptr = ptr->next;
    }
    ptr->next = elem;
    elem->next = NULL;
    cout<<":: Insertion Completed\n";
  }
  void insertAny(int data,int loc){
    if(loc < 2){
      cout<<"*Inserting at front\n";
      insertAtFront(data);
      return;
    }
    cout<<":: Inserting element("<<data<<") at location("<<loc<<"):..\n";
    if(head == NULL){
      cout<<"*Empty linked list\n";
      return;
    }
    struct Node *elem = new struct Node,*ptr;
    if(elem == NULL){
      cout<<"* Memory allocation failed\n";
      return;
    }
    elem->data = data;
    ptr = head;
    for(int i = 1;i<loc-1 && ptr!=NULL;i++){
      ptr = ptr->next;
    }
    if(ptr ==NULL){
      cout<<"* Index not found\n";
      return;
    }
    elem->next = ptr->next;
    ptr->next = elem;
    cout<<":: Insertion Completed\n";
  }
  void deleteFront()
  {
    cout<<":: deletion from front ...\n";
    if(head == NULL)
    {
      cout<<"* Empty LinkedList"<<endl;
      return;
    }
    struct Node *ptr = head;
    head = head->next;
    delete ptr;
    cout<<":: deletion Completed\n";
  }
  void deleteEnd(){
    cout<<"deletion from end\n";
    if(head == NULL){
      cout<<"* Empty LinkedList\n";
      return;
    }
    struct Node *ptr,*tmp;
    ptr = head;
    while(ptr->next->next != NULL){
      ptr = ptr->next;
    }
    tmp = ptr->next;
    ptr->next = NULL;
    delete tmp;
    cout<<"deletion Completed\n";
  }
  void deleteAny(int loc){
    cout<<":: deleting element at position("<<loc<<")\n";
    if(head == NULL){
      cout<<"* Empty LinkedList\n";
      return;
    }
    if(loc < 2){
      cout<<"* deletion form front\n";
      deleteFront();
      return;
    }
    struct Node *ptr = head,*tmp;
    for(int i = 1;i < loc -1 && ptr->next!=NULL;i++)
      ptr = ptr->next;
    if(ptr->next == NULL)
    {
      cout<<"* Index not found\n";
      return;
    }
    tmp = ptr->next;
    ptr->next = ptr->next->next;
    delete tmp;
    cout<<"deletion Completed\n";
  }
  void deleteAnyKey(int key){
    cout<<":: deleting element("<<key<<")\n";
    if(head == NULL){
      cout<<"* Empty LinkedList\n";
      return;
    }
    struct Node *ptr = head,*tmp;
    while(ptr->data != key){
      tmp = ptr;
      ptr = ptr->next;
      if(ptr == NULL) break;
    }
    if(ptr== NULL)
    {
      cout<<"* Element not found\n";
      return;
    }
    if(ptr == head)
    {
      cout<<"*deletion head"<<endl;
      deleteFront();
      return;
    }
    tmp->next = tmp->next->next;
    delete ptr;
    cout<<"deletion Completed\n";
  }
};
void simulate(LinkedList list)
{

  int data  ,loc,sts = 1,n;
  while(sts){
      cout<<"1) insert at front"<<endl
          <<"2) insert at last"<<endl
          <<"3) insert at any position"<<endl
          <<"4) view"<<endl
          <<"5) deletion front"<<endl
          <<"6) deletion end"<<endl
          <<"7) deletion at position"<<endl
          <<"8) deletion key"<<endl
          <<"#) Exit"<<endl;
      cout<<"Choose option: "<<endl;
      cin>>n;
      switch(n)
      {
        case 1:
          cout<<"Enter data: ";
          cin>>data;
          list.insertAtFront(data);
          break;
        case 2:
          cout<<"Enter data: ";
          cin>>data;
          list.insertAtEnd(data);
          break;
        case 3:
          cout<<"Enter data: ";
          cin>>data;
          cout<<"Enter location: ";
          cin>>loc;
          list.insertAny(data,loc);
          break;
        case 4:
          list.traverse();
          break;
        case 5:
          list.deleteFront();
          break;
        case 6:
          list.deleteEnd();
          break;
        case 7:
          cout<<"enter position: ";
          cin>>n;
          list.deleteAny(n);
          break;
        case 8:
          cout<<"enter key: ";
          cin>>n;
          list.deleteAnyKey(n);
          break;
        default:sts = 0;
      }  
  }
}
int main(){
  LinkedList list(10);
  //list.traverse();
  simulate(list);
  return 0;
}