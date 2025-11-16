#include <iostream>
using namespace std;
int main()
{
    /* int n = 2;
     cout << endl;
     switch (n)
     {
     case 1:
         cout << "first" << endl;
         break;
     case 2:
         cout << "second" << endl;
         break;
     case 3:
         cout << "third" << endl;
     }
     cout << endl;
 }*/
    /* char ch = '1';
     int num = 1;
     cout << endl;
     switch (ch)
     {
     case 1:
         cout << "first" << endl;
         break;

     case '1':
         switch (num)
         {
         case 1:
             cout << "the value of num is:" << num << endl;
             break;
         }
         break;
     default:
         cout << "it is default case" << endl;
     }
     cout << endl;
 }*/

    while (true)
    {
        int n;
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "Doing something...\n";
            break;
        case 0:
            cout << "Exiting...\n";
            n = false;
            break;
        }
    }
}