#include<iostream>
using namespace std;
int main(){
    int a, b ,c ,d;
    cout<<"enter 1st number";
    cin>>a;
    cout<<"enter 2nd number";
    cin>>b;
    cout<<"enter 3rd number";
    cin>>c;
    cout<<"enter 4th number";
    cin>>d;
    if(a>b , a>c , a>d){
        cout<<a<<" a is biggest number";
    }
    if(b>a ,b>c , b>d){
        cout<<b<<" b is biggest number";
    }
    if(c>a , c>b , c>d){
        cout<<c<<" c id biggest number";
    }
    if(d>a , d>b ,d>c){
        cout<<d<<" d is biggest number";
    }
}