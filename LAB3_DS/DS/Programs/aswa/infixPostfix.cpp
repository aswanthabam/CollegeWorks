#include <iostream>
using namespace std;
class Stack
{
public:
    Stack(int s)
    {
        size = s;
        array = new char[size];
    }
    void push(char val)
    {
        if (top == size - 1)
        {
            cout << " * Error: stack overflow" << endl;
            return;
        }
        top++;
        array[top] = val;
    }
    char pop()
    {
        char item;
        if (top == -1)
            return item;
        item = array[top];
        top--;
        return item;
    }
    char top_value()
    {
        if (top == -1)
        {
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
    char *array;
};
class InfixToPostfix
{
private:
    char *infix;
    char *postfix;
    int max_size;
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

public:
    InfixToPostfix(int m)
    {
        max_size = m;
        infix = new char[m];
        postfix = new char[m];
    }
    void read()
    {
        cout << "Enter an infix expression : ";
        cin.getline(infix, max_size);
    }

    void convert()
    {
        Stack *s = new Stack(100);
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
                s->push(c);
            }
            else if (c == ')')
            {
                while (!s->is_empty() && s->top_value() != '(')
                {
                    postfix[j++] = s->pop();
                }
                if (!s->is_empty() && s->top_value() == '(')
                {
                    s->pop();
                }
            }
            else
            {
                while (!s->is_empty() && precedence(c) <= precedence(s->top_value()) && s->top_value() != '(')
                {
                    postfix[j++] = s->pop();
                }
                s->push(c);
            }
        }
        while (!s->is_empty())
        {
            postfix[j++] = s->pop();
        }
        postfix[j] = '\0';
    }
    void display_result()
    {
        cout << "Postfix expression : ";
        for (int i = 0; postfix[i] != '\0'; i++)
            cout << postfix[i];
        cout << endl;
    }
};

int main()
{
    InfixToPostfix *in = new InfixToPostfix(100);
    in->read();
    in->convert();
    in->display_result();
    return 0;
}