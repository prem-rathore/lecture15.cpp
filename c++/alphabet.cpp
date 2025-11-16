#include <iostream>
using namespace std;
int main()
{
    int n; // rows
    cout << "enter a number of square";
    cin >> n;

    for (int i = 1; i <= n; i++)
    { // rows
        for (int j = 1; j <= n; j++)
        { // column
            cout << (char)(j + 96) << " ";
        }
        cout << endl;
    }
}