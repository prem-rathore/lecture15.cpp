#include<iostream>
using namespace std;
int main(){
    int x , y, z;
    cout<<"enter 1st number:";
    cin>>x;
    cout<<"enter 2nd number:";
    cin>>y;
    cout<<"enter 3rd number:";
    cin>>z;
   if(x>y){
    if(x>z){
cout<<x<<"is greatest:";
    }
    else{
        cout<<z<<" is greatest";
    }

   }
   else{
    if(y>z){
        cout<<y<<" is greatse ";
    }
    else{
        cout<<z<<" is greatest";
    }
   }
}