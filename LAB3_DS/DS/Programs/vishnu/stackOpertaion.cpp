#include <iostream>
using namespace std;
const int MAX_SIZE = 10;
class Stack
{
public:
    Stack() : top(-1) {}
    void push(int val)
    {
        if (top == MAX_SIZE - 1)
        {
            cout << "Error: stack overflow" << endl;
            return;
        }
        top++;
        data[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Error: stack underflow" << endl;
            return;
        }
        top--;
    }
    int top_val()
    {
        if (top == -1)
        {
            cout << "Error: stack empty" << endl;
            return -1;
        }
        return data[top];
    }
    bool is_empty()
    {
        return top == -1;
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
             << "1. Push element\n"
             << "2. Pop element\n"
             << "3. Top element\n"
             << "4. Check if stack is empty\n"
             << "5. Quit\n";
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
            cout << "Top element: " << s.top_val() << endl;
            break;
        case 4:
            if (s.is_empty())
            {
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Stack is not empty" << endl;
            }
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice, try again" << endl;
        }
    } while (choice != 5);

    return 0;
}
