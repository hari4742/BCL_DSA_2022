#include <iostream>

using namespace std;
#ifndef MY_STACK_H
#define MY_STACK_H
class Node
{
public:
    int data;
    Node *next = NULL;
    Node(int val);
};

class Stack
{
public:
    Node *top = NULL;
    int length = 0;
    void push(int val);
    int pop();
    int peek();
    bool isEmpty();
    void print();
    int len();
};
#endif