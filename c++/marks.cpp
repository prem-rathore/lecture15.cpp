#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter marks:";
    cin>>x;
    if(x>=81 and x<=100){
        cout<<"very good ";
    }
    else if(x>=61){
        cout<<"good";
    }
    else if(x>=41){
        cout<<"average";
    }
    if (x<=40){
        cout<<"fail";
    }
}