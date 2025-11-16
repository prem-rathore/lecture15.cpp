#include <iostream>
using namespace std;

int printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << endl;
    }
}

int main()
{

    int n;
    cout << "enter size of array" << endl;
    cin >> n;

    int arr[n];

    int result = printarray(arr, n);
}