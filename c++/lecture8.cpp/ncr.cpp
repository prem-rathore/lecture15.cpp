#include <iostream>
using namespace std;
/*int factorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return num / denom;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << "answer is " << nCr(n, r) << endl;
}*/

/*void printcounting(int n)
{ // function body
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{ // function call
    int n;
    cin >> n;
    printcounting(n);
    return 0;
}*/

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << n << ":is a prime number" << endl;
    }
    else
    {
        cout << "not a primenumber" << endl;
    }
    return 0;
}
