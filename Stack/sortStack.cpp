#include <iostream>
#include "Stack.h"
using namespace std;
void insertSort(Stack &s, int val)
{
    if (s.isEmpty() || val > s.peek())
    {
        s.push(val);
        return;
    }
    int el = s.pop();
    insertSort(s, val);
    s.push(el);
}
void sortStack(Stack &s)
{
    if (s.isEmpty())
    {
        return;
    }
    int el = s.pop();
    sortStack(s);
    insertSort(s, el);
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
    sortStack(st);
    cout << "Sorted Stack: " << endl;
    st.print();
    return 0;
}