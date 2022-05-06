#include <iostream>
#include "Stack.h"

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

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout << "Stack: " << endl;
    st.print();
    insertBottom(st, 6);
    cout << "Stack after Inserting at Bottom element: " << endl;
    st.print();
    return 0;
}