#include <iostream>
using namespace std;
const int MAX_SIZE = 20;
class Stack
{
public:
    Stack() : top(-1) {}
    void push(int val)
    {
        if (top == MAX_SIZE - 1)
        {
            cout << " * Error: Stack Overflow!" << endl;
            return;
        }
        top++;
        data[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << " * Error: Stack underflow!" << endl;
            return;
        }
        cout << " * Element poped : " << data[top] << endl;
        top--;
    }
    int top_val()
    {
        if (top == -1)
        {
            cout << " * Error: Stack is empty" << endl;
            return -1;
        }
        return data[top];
    }
    bool is_empty()
    {
        return top == -1;
    }
    bool is_full()
    {
        return top == MAX_SIZE - 1;
    }

private:
    int data[MAX_SIZE];
    int top;
};

int main()
{
    Stack s;
    int choice, val;
    do
    {
        cout << "Choose an action:\n"
             << "\t1. Push element\n"
             << "\t2. Pop element\n"
             << "\t3. Top element\n"
             << "\t4. Check stack status\n"
             << "\t5. Quit\n";
        cout << "Enter : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            s.push(val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << " * Top element is : " << s.top_val() << endl;
            break;
        case 4:
            if (s.is_empty())
            {
                cout << " * Stack is empty" << endl;
            }
            else if (s.is_full())
            {
                cout << " * Stack is full" << endl;
            }
            else
            {
                cout << " * Stack is not full/empty" << endl;
            }
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
