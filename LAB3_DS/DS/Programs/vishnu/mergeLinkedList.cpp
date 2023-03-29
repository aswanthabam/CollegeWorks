#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insert(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    void display()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    Node *getHead()
    {
        return head;
    }

    void setHead(Node *newHead)
    {
        head = newHead;
    }
};
Node *mergeSortedLists(Node *head1, Node *head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    Node *mergedHead;
    if (head1->data < head2->data)
    {
        mergedHead = head1;
        mergedHead->next = mergeSortedLists(head1->next, head2);
    }
    else
    {
        mergedHead = head2;
        mergedHead->next = mergeSortedLists(head1, head2->next);
    }
    return mergedHead;
}
int main()
{
    cout << "First Linked List : ";
    LinkedList list1;
    list1.insert(1);
    list1.insert(3);
    list1.insert(5);
    list1.insert(7);
    list1.display();
    cout << "Second Linked List : ";
    LinkedList list2;
    list2.insert(2);
    list2.insert(4);
    list2.insert(6);
    list2.insert(8);
    list2.display();
    cout << "Merged Linked List : ";
    Node *mergedHead = mergeSortedLists(list1.getHead(), list2.getHead());
    LinkedList mergedList;
    mergedList.setHead(mergedHead);
    mergedList.display();
    return 0;
}
