#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue
{
public:
    Queue() : size(0), front(0), rear(-1) {}
    bool is_empty() const
    {
        return size == 0;
    }
    bool is_full() const
    {
        return size == MAX_SIZE;
    }
    int get_size() const
    {
        return size;
    }
    void enqueue(int element)
    {
        if (is_full())
        {
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1) % MAX_SIZE;
        data[rear] = element;
        size++;
    }
    int dequeue()
    {
        if (is_empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int element = data[front];
        front = (front + 1) % MAX_SIZE;
        size--;
        return element;
    }
    void display() const
    {
        cout << "Queue: ";
        for (int i = 0; i < size; i++)
        {
            int index = (front + i) % MAX_SIZE;
            cout << data[index] << " ";
        }
        cout << endl;
    }

private:
    int data[MAX_SIZE];
    int size;
    int front;
    int rear;
};
int main()
{
    Queue queue;
    int choice, element;

    do
    {
        cout << "Enter your choice:" << endl;
        cout << "1. Enqueue element" << endl;
        cout << "2. Dequeue element" << endl;
        cout << "3. Display queue" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element to enqueue:" << endl;
            cin >> element;
            queue.enqueue(element);
            break;
        case 2:
            element = queue.dequeue();
            if (element != -1)
            {
                cout << "Dequeued element: " << element << endl;
            }
            break;
        case 3:
            queue.display();
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}
