#include <iostream>
using namespace std;
/*int countsetbits(int n)
{
    int i = 0;
    for (; n > 0; n = n / 2)
    {
        if (n % 2 == 1)
            i++;
    }
    return i;
}
int main()
{
    int a, b;
    cout << "ebnetr a number";
    cin >> a >> b;
    int total = countsetbits(a) + countsetbits(b);
    cout << "total set bits=" << total << endl;
    return 0;
}*/

int fibonacci(int n)
{
    int a = 0, b = 1, next;
    cout << "fibonacci series:";
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter a number:";
    cin >> n;
    fibonacci(n);
    return 0;
}
