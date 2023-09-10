#include <iostream>
using namespace std;
class Queue
{
public:
    Queue(int s)
    {
        size = s;
        array = new int[size];
        rear = -1;
        front = -1;
    }
    bool is_empty() const
    {
        return rear == front;
    }
    bool is_full() const
    {
        return rear == size - 1;
    }
    void enqueue(int element)
    {
        if (is_full())
        {
            cout << " * Queue is full" << endl;
            return;
        }
        rear++;
        array[rear] = element;
    }
    int dequeue()
    {
        if (is_empty())
        {
            cout << " * Queue is empty" << endl;
            return -1;
        }
        front++;
        int element = array[front];
        return element;
    }
    void display()
    {
        if (is_empty())
            cout << "* Queue is empty!" << endl;
        else
        {
            cout << " * Queue: ";
            for (int i = front + 1; i < rear + 1; i++)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }

private:
    int *array;
    int size;
    int front = -1;
    int rear = -1;
};
int main()
{
    Queue *queue = new Queue(10);
    int choice, element;

    do
    {
        cout << "Enter your choice:" << endl;
        cout << "\t1. Enqueue element" << endl;
        cout << "\t2. Dequeue element" << endl;
        cout << "\t3. Display queue" << endl;
        cout << "\t4. Exit" << endl;
        cout << "Choose: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << " * Enter element to enqueue: ";
            cin >> element;
            queue->enqueue(element);
            break;
        case 2:
            element = queue->dequeue();
            if (element != -1)
            {
                cout << " * Dequeued element: " << element << endl;
            }
            break;
        case 3:
            queue->display();
            break;
        case 4:
            break;
        default:
            cout << " * Invalid choice" << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}
