#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class CircularLinkedList
{
private:
    Node *head;

public:
    CircularLinkedList()
    {
        head = NULL;
    }
    void addBegin(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        if (head == NULL)
        {
            newNode->next = newNode;
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            head = newNode;
        }
    }

    void addEnd(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        if (head == NULL)
        {
            newNode->next = newNode;
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void addAfter(int value, int pos)
    {
        Node *newNode = new Node();
        newNode->data = value;
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteBegin()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            Node *temp1 = head;
            head = head->next;
            temp->next = head;
            delete temp1;
        }
    }

    void deleteEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (head->next == head)
        {
            delete head;
            head = NULL;
        }
        else
        {
            Node *temp = head;
            Node *prev = NULL;
            while (temp->next != head)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = head;
            delete temp;
        }
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main()
{
    CircularLinkedList cll;
    int choice, value, pos;
    while (true)
    {
        cout << "1. Add a new node at the beginning" << endl;
        cout << "2. Add a new node at the end" << endl;
        cout << "3. Add a new node after the i-th node" << endl;
        cout << "4. Delete a node from the beginning" << endl;
        cout << "5. Delete a node from the end" << endl;
        cout << "6. Print the list" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be inserted: ";
            cin >> value;
            cll.addBegin(value);
            break;
        case 2:
            cout << "Enter the value to be inserted: ";
            cin >> value;
            cll.addEnd(value);
            break;
        case 3:
            cout << "Enter the value to be inserted: ";
            cin >> value;
            cout << "Enter the position after which to insert: ";
            cin >> pos;
            cll.addAfter(value, pos);
            break;
        case 4:
            cll.deleteBegin();
            break;
        case 5:
            cll.deleteEnd();
            break;
        case 6:
            cll.printList();
            break;
        case 7:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
