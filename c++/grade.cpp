#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"enter a marks:";
    cin>>x;
    if(x>=90 && x<100){
        cout<<"A";
    }
    else if(x>=75 && x<=89){
        cout<<"B";
    }
    else if(x>=50 && x<=74){
        cout<<"C";
    }
    else if(x>=33 && x<=49){
        cout<<"D";
    }
    else{
        cout<<"fail";
    }
}