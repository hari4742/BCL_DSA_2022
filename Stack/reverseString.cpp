#include <iostream>
#include "Stack.h"

// Function to reverse a string using stack
void reverseString(string &s, int len)
{
    Stack st;
    for (int i = 0; i < len; i++)
    {
        st.push(s[i]);
    }
    string temp;
    for (int i = 0; i < len; i++)
    {
        temp += st.pop();
    }
    s = temp;
}
// Function which calculates the length of the String
int stringLen(string s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}
int main()
{
    string s = "abcedf";
    cout << "Original String: " << s << endl;
    reverseString(s, stringLen(s));
    cout << "Reversed String: " << s;
    return 0;
}
