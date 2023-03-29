#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
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
    void addAtBeginning(int d)
    {
        Node *newNode = new Node(d);
        newNode->next = head;
        head = newNode;
    }
    void addAtEnd(int d)
    {
        Node *newNode = new Node(d);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    void addAfterIth(int d, int i)
    {
        Node *newNode = new Node(d);
        Node *current = head;
        int count = 1;
        while (current != NULL && count < i)
        {
            current = current->next;
            count++;
        }
        if (current == NULL)
        {
            cout << " * Index out of range!" << endl;
            return;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    void deleteFromBeginning()
    {
        if (head == NULL)
        {
            cout << " * LinkedList is empty!" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    void deleteFromEnd()
    {
        if (head == NULL)
        {
            cout << " * LinkedList is empty!" << endl;
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *current = head;
        while (current->next->next != NULL)
        {
            current = current->next;
        }
        delete current->next;
        current->next = NULL;
    }
    void printList()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList list;
    int choice, data, position;
    while (true)
    {
        cout << "Choose:-" << endl;
        cout << "\t1. Add node at beginning" << endl;
        cout << "\t2. Add node at end" << endl;
        cout << "\t3. Add node after i-th position" << endl;
        cout << "\t4. Delete node from beginning" << endl;
        cout << "\t5. Delete node from end" << endl;
        cout << "\t6. Print the list" << endl;
        cout << "\t7. Exit" << endl;
        cout << "Enter: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            list.addAtBeginning(data);
            break;
        case 2:
            cout << "Enter data: ";
            cin >> data;
            list.addAtEnd(data);
            break;
        case 3:
            cout << "Enter data: ";
            cin >> data;
            cout << "Enter position: ";
            cin >> position;
            list.addAfterIth(data, position);
            break;
        case 4:
            list.deleteFromBeginning();
            break;
        case 5:
            list.deleteFromEnd();
            break;
        case 6:
            list.printList();
            break;
        case 7:
            exit(0);
        default:
            cout << " * Invalid choice!" << endl;
        }
    }
    return 0;
}
