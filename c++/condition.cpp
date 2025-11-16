#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    if(x>0){
        cout<<"number is postive";
    }
    else if(x<0){
        cout<<"number is negative";
    }
    else{
        cout<<"number is zero";
    }
}