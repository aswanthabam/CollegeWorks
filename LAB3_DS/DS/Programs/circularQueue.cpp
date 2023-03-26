#include <iostream>
using namespace std;
class CircularQueue
{
private:
    int *array, front, rear, size;

public:
    CircularQueue(int s)
    {
        array = new int[s];
        size = s;
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if ((rear + 1) % size == front)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }
    void enqueue()
    {
        int newItem;
        if (isFull())
        {
            cout << "Queue is full. Cannot add more items." << endl;
            return;
        }
        cout << "Enter the item you want to add: ";
        cin >> newItem;
        rear = (rear + 1) % size;
        array[rear] = newItem;
        cout << newItem << " added to the queue." << endl;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot delete more items." << endl;
            return;
        }
        int removedItem = array[front];
        front = (front + 1) % size;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        cout << removedItem << " removed from the queue." << endl;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Elements in the queue are: ";
        int i;
        for (i = front + 1; i < rear; i = (i + 1) % size)
            cout << array[i] << " ";
        cout << array[i] << endl;
    }
};
int main()
{
    CircularQueue *q = new CircularQueue(10);
    int choice;
    while (1)
    {
        cout << "Circular Queue Operations" << endl;
        cout << "\t1. Add item" << endl;
        cout << "\t2. Remove item" << endl;
        cout << "\t3. Display queue" << endl;
        cout << "\t4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            q->enqueue();
            break;
        case 2:
            q->dequeue();
            break;
        case 3:
            q->display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}