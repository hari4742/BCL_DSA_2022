#include <iostream>
#include "Stack.h"

void deleteMidElement(Stack &s, int len, int count = 0)
{
    if (!s.isEmpty())
    {
        int el = s.pop();
        if (len / 2 == count)
        {
            return;
        }
        deleteMidElement(s, len, ++count);
        s.push(el);
    }
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
    deleteMidElement(st, st.len());
    cout << "Stack after deleting mid element: " << endl;
    st.print();
    return 0;
}