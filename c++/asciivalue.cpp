#include<iostream>
using namespace std;
int main(){
    //using while loop
    int i=97;
    cout<<"lowercase alphabet:"<<endl;
    while(i<=122){
        cout<<i<<" -> "<<char(i)<<endl;
        i++;
    }
    cout<<endl;
    int j=65;
    cout<<"uppercase alphabet"<<endl;
    while(j<=90){
        cout<<j<<" -> "<<char(j)<<endl;
        j++;
    }

}