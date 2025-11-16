#include<iostream>
using namespace std;
int main(){
    int x , y, z;
    cout<<"enter ram age:";
    cin>>x;
    cout<<"enter shyam age:";
    cin>>y;
    cout<<"enter ajay age:";
    cin>>z;
    if(x<y){
        if(x<z){
            cout<<"ram is youngest"<<endl<<x;
        }
        else{
            cout<<" ajay is youngest";
        }
    }
    else{
        if(y<z){
            cout<<"shyam is youngest";
        }
        else{
            cout<<"ajay is youngest";
        }

    }
}