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
   if(x<y and x<z){
    cout<<x<<"is least number";
   }
   else if(y<x and y<z){
    cout<<y<<"is least number";
   }
   else{
    cout<<z<<"is least number";
   }
}