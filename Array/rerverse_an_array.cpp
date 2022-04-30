// 1) FIND THE REVERSE OF AN ARRAY. You
// must do this by modifying the input array inplace
// with O(1) extra memory.

// Input: [23, 64, 94, 2, 34, 74, 73]
// Output: [73, 74, 34, 2, 94, 64, 23]

#include <iostream>
using namespace std;

// function to reverse an array
void reverse_array(int *arr, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        // swapping with the last corresponding element in the array
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

// to display an array
void displayArr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {23, 64, 94, 2, 34, 74, 73};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Input: ";
    displayArr(arr, len);
    reverse_array(arr, len);
    cout << "Output: ";
    displayArr(arr, len);

    return 0;
}