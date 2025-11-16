#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int ans, x;
    ans = 0;
    while (x != 0)
    {
        int digit = x % 10;

        if ((ans > digit / 10) || (ans < digit / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
        ans++;
    }
    return ans;
}