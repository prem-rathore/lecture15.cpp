#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter a number:";
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cout<<"enter a number:";
    cin>>n2;
    cout<<"answer is:";
    if(op=='+')cout<<n1+n2;
    if(op=='-')cout<<n1-n2;
    if(op=='/')cout<<n1/n2;
    if(op=='*')cout<<n1*n2;
    
    }
