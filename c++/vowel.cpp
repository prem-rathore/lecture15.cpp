#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a albhabet:";
    cin>>ch;
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U'){
        cout<<ch<<": it is a vowel";
    }
    else{
        cout<<"it is a consonant";
    }
}