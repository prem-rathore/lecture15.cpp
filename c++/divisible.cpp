#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter number:";
    cin>>x;
    if ((x%5==0 and x%3==0) and (x%15!=0)){
        cout<<"divisble by 5 or 3";
    }
    else{
        cout<<"not divible by 15";
    }
}