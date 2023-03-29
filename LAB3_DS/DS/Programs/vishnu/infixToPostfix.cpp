#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
const int MAX_SIZE = 100;
class Stack
{
private:
    char data[MAX_SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(char c)
    {
        if (top == MAX_SIZE - 1)
        {
            cout << "Error: Stack overflow" << endl;
            return;
        }
        top++;
        data[top] = c;
    }
    char pop()
    {
        if (top == -1)
        {
            cout << "Error: Stack underflow" << endl;
            return '\0';
        }
        char c = data[top];
        top--;
        return c;
    }
    char peek()
    {
        if (top == -1)
        {
            cout << "Error: Stack is empty" << endl;
            return '\0';
        }
        return data[top];
    }
    bool is_empty()
    {
        return top == -1;
    }
};
int precedence(char op)
{
    switch (op)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        return -1;
    }
}
void infix_to_postfix(char infix[], char postfix[])
{
    Stack s;
    int j = 0;
    for (int i = 0; infix[i] != '\0'; i++)
    {
        char c = infix[i];
        if (isalnum(c))
        {
            postfix[j++] = c;
        }
        else if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            while (!s.is_empty() && s.peek() != '(')
            {
                postfix[j++] = s.pop();
            }
            if (!s.is_empty() && s.peek() == '(')
            {
                s.pop();
            }
        }
        else
        {
            while (!s.is_empty() && precedence(c) <= precedence(s.peek()))
            {
                postfix[j++] = s.pop();
            }
            s.push(c);
        }
    }
    while (!s.is_empty())
    {
        postfix[j++] = s.pop();
    }
    postfix[j] = '\0';
}
int main()
{
    char infix[MAX_SIZE], postfix[MAX_SIZE];
    cout << "Enter infix expression: ";
    cin.getline(infix, MAX_SIZE);
    infix_to_postfix(infix, postfix);
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
