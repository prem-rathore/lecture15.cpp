#include<iostream>
using namespace std;
int main(){
    cout<<"uppercase alphabet"<<endl;
    for(int i=65;i<=90;i++){
        cout<<i<<" -> "<<char(i)<<endl;
        
    }

    cout<<endl;
    cout<<"lower case alphabet"<<endl;

    for(int j=97;j<=122;){
        cout<<j<<" -> "<<char(j)<<"\n";
        j++;
    }
}