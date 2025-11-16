#include<iostream>
using namespace std;
int main(){
    //reverse of number using loop
    int n;
    cout<<"enter a number:";
    cin>>n;
    int r = 0;
    while(n!=0){
        int ld = n%10;
        r *=10;
        r +=ld;
        n/=10;

    }
    cout<<r<< " ";
}