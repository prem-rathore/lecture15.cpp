#include<iostream>
using namespace std;
int main(){
    int n,sum =0;
    cout<<"enter a number:";
    cin>>n;
    
    for(int i=n;i>0;i=i/10){
        int ld=i%10;
        sum=sum+ld;
    }
    cout<<"sum of digit:"<<sum;
    return 0;

}