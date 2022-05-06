#include <iostream>
#include "Stack.h"

using namespace std;
void insertBottom(Stack &s, int val)
{
    if (s.isEmpty())
    {
        s.push(val);
        return;
    }
    int el = s.pop();
    insertBottom(s, val);
    s.push(el);
}
void reverseStack(Stack &s)
{
    if (s.isEmpty())
    {
        return;
    }
    int el = s.pop();
    reverseStack(s);
    insertBottom(s, el);
}
int main()
{
    Stack st;
    st.push(4);
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(5);
    cout << "Stack: " << endl;
    st.print();
    reverseStack(st);
    cout << "Reversed Stack: " << endl;
    st.print();

    return 0;
}