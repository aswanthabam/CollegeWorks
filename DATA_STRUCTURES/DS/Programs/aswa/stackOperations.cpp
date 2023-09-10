#include <iostream>
using namespace std;
class Stack
{
public:
    Stack(int s)
    {
        size = s;
        array = new int[size];
    }
    void push(int val)
    {
        if (top == size - 1)
        {
            cout << " * Error: stack overflow" << endl;
            return;
        }
        top++;
        array[top] = val;
        cout << " * Element added!" << endl;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << " * Error: stack underflow" << endl;
            return;
        }
        top--;
        cout << " * Elemnent removed!" << endl;
    }
    int top_value()
    {
        if (top == -1)
        {
            cout << " * Error: stack empty" << endl;
            return -1;
        }
        return array[top];
    }
    bool is_empty()
    {
        return top == -1;
    }
    bool is_full()
    {
        return top == size - 1;
    }

private:
    int top = -1;
    int size;
    int *array;
};

int main()
{
    Stack *s = new Stack(10);
    int choice, val;
    do
    {
        cout << "Choose an action:-\n"
             << "\t1. Push element\n"
             << "\t2. Pop element\n"
             << "\t3. Top element\n"
             << "\t4. Status of stack\n"
             << "\t5. Quit\n"
             << "Choose: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            s->push(val);
            break;
        case 2:
            s->pop();
            break;
        case 3:
            cout << " * Top element: " << (s->top_value()) << endl;
            break;
        case 4:
            if (s->is_empty())
                cout << " * Status : Stack is empty" << endl;
            else if (s->is_full())
                cout << " * Status : Stack is Full" << endl;
            else
                cout << " * Status : Stack is not empty/full" << endl;
            break;
        case 5:
            cout << " * Exiting..." << endl;
            break;
        default:
            cout << " * Invalid choice, try again" << endl;
        }
    } while (choice != 5);

    return 0;
}
