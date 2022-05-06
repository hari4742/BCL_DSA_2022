#include <iostream>
using namespace std;
#include "Stack.h"

Node::Node(int val)
{
    data = val;
}

void Stack::push(int val)
{
    if (top == NULL)
    {
        top = new Node(val);
    }
    else
    {
        Node *el = new Node(val);
        el->next = top;
        top = el;
    }
    length++;
}
int Stack::pop()
{
    if (top == NULL)
    {
        throw "Empty Stack";
    }
    else
    {
        Node *el = top;
        int val = top->data;
        top = top->next;
        delete el;
        length--;
        return val;
    }
}
int Stack::peek()
{
    if (top == NULL)
    {
        throw "Empty Stack";
    }
    else
    {
        return top->data;
    }
}
bool Stack::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}
void Stack::print()
{
    if (isEmpty())
    {
        cout << "NULL" << endl;
        return;
    }
    int val = pop();
    cout << val << "->";
    print();
    push(val);
}
int Stack::len()
{
    return length;
}