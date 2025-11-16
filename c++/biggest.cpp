#include<iostream>
using namespace std;
int main(){
    int a, b ,c ,d;
    cout<<"a: enter 1st number";
    cin>>a;
    cout<<"b: enter 2nd number";
    cin>>b;
    cout<<"c: enter 3rd number";
    cin>>c;
    cout<<"d: enter 4th number";
    cin>>d;
    if(a>b && a>c && a>d){
        cout<<a<<": a is biggest";
    }
    else if(b>a && b>c && b>d){
        cout<<b<<": b is biggest";
    }
    else if(c>a && c>b && c>d){
        cout<<c<<": c is biggest";
    }
    else{
        cout<<d<<": d is biggest";
    }
}
        
    