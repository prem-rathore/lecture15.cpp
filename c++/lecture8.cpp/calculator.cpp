#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enetr a number:";
    cin >> a;
    cout << "enter a number";
    cin >> b;
    char op;
    cout << "enetr the operation" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "enter a valid operation" << endl;
    }
}
/* int money;
 cout << "enetr a number:";
 cin >> money;
 int note;
 int choice = 1;
 switch (choice)
 {
 case 1:
     note = money / 100;
     cout << "100=" << note << endl;

     money %= 100;

 case 2:
     note = money / 50;
     cout << "50=" << note << endl;
     money %= 50;

 case 3:
     note = money / 20;
     cout << "20=" << note << endl;
     money %= 20;

 case 4:
     note = money / 10;
     cout << "10=" << note << endl;
     money %= 10;

 case 5:
     note = money / 1;
     cout << "1=" << note << endl;
     money %= 1;

 default:
     cout << "entr valid amount:" << endl;
 }
}*/