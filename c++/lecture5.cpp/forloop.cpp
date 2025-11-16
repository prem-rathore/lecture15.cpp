#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enetr a number";
    cin >> n;
    bool prime = 1;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout<<"not a prime number"<<endl;
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "is a prime number" << endl;
    }
}