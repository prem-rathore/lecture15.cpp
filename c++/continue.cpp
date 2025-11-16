#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=20;i++){
        if(i==3) continue;//continue is pause for numbber
        if(i==8) continue;
        cout<<i<<" ";
    }
}