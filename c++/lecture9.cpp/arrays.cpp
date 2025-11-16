#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "print the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}
int main()
{
    int number[15];
    cout << "value at 14 index" << number[14] << endl;
    int second[3] = {5, 7, 11};
    cout << "value at 2 index" << second[2] << endl;
    int third[15] = {2, 7};
    int n = 15;
    printarray(third, 15);
    int fourth[10] = {10};
    n = 10;
    printarray(fourth, 10);
}