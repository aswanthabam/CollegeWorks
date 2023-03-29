#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        next = prev = NULL;
    }
};
class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyLinkedList()
    {
        head = tail = NULL;
    }
    void addNodeAtBeginning(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void addNodeAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (tail == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void deleteNodeAtBeginning()
    {
        if (head == NULL)
        {
            cout << " * LinkedList is empty" << endl;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
            }
            else
            {
                tail = NULL;
            }
            delete temp;
        }
    }
    void deleteNodeAtEnd()
    {
        if (tail == NULL)
        {
            cout << " * LinkedList is empty" << endl;
        }
        else
        {
            Node *temp = tail;
            tail = tail->prev;
            if (tail != NULL)
            {
                tail->next = NULL;
            }
            else
            {
                head = NULL;
            }
            delete temp;
        }
    }
    void printList()
    {
        Node *currNode = head;
        while (currNode != NULL)
        {
            cout << currNode->data << " ";
            currNode = currNode->next;
        }
        cout << endl;
    }
};
int main()
{
    DoublyLinkedList dll;
    int choice, data;
    do
    {
        cout << "Choose:-\n";
        cout << "\t1. Add a new node at the beginning\n";
        cout << "\t2. Add a new node at the end\n";
        cout << "\t3. Delete the first node\n";
        cout << "\t4. Delete the last node\n";
        cout << "\t5. Print the list\n";
        cout << "\t6. Exit\n";
        cout << "Enter: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the data: ";
            cin >> data;
            dll.addNodeAtBeginning(data);
            break;
        case 2:
            cout << "Enter the data: ";
            cin >> data;
            dll.addNodeAtEnd(data);
            break;
        case 3:
            dll.deleteNodeAtBeginning();
            break;
        case 4:
            dll.deleteNodeAtEnd();
            break;
        case 5:
            cout << "The list is: ";
            dll.printList();
            break;
        case 6:
            cout << " * Exiting..." << endl;
            break;
        default:
            cout << " * Invalid choice" << endl;
        }
        cout << endl;
    } while (choice != 6);
    return 0;
}
