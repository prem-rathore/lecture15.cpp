#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"3 digit number";

    }
    else{
        cout<<"not 3 digit number";
    }
}