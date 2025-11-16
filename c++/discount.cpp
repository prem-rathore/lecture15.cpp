#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter amount:";
    cin>>x;
    if(x>=5000){
        cout<<"20% discount";
    }
    else if(x>=2000){
        cout<<"10% discount";
    }
    else{
        cout<<"no discount";
    }
}