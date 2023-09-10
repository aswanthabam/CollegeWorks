#include <iostream>
#define MAX 5
using namespace std;
class CircularQueue
{
private:
    int items[MAX], front, rear;

public:
    CircularQueue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if ((front == 0 && rear == MAX - 1) || front == rear + 1)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }
    void enqueue()
    {
        int newItem;
        if (isFull())
        {
            cout << " * Queue is full. Cannot add more items." << endl;
            return;
        }
        cout << "Enter the item you want to add: ";
        cin >> newItem;
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX;
        items[rear] = newItem;
        cout << " * " << newItem << " added to the queue." << endl;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << " * Queue is empty. Cannot delete more items." << endl;
            return;
        }
        int removedItem = items[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
        cout << " * " << removedItem << " removed from the queue." << endl;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << " * Queue is empty." << endl;
            return;
        }
        cout << "Elements in the queue are: ";
        int i;
        for (i = front; i != rear; i = (i + 1) % MAX)
            cout << items[i] << " ";
        cout << items[i] << endl;
    }
};
int main()
{
    CircularQueue q;
    int choice;
    while (1)
    {
        cout << "Circular Queue Operations" << endl;
        cout << "\t1. Add item" << endl;
        cout << "\t2. Remove item" << endl;
        cout << "\t3. Display queue" << endl;
        cout << "\t4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);
        default:
            cout << " * Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
