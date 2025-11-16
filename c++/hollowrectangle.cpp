#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter a number";
    cin>>r;
    int c;
    cout<<"enter a number";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(i==1 || i==r || j==1 || j==c){
                cout<< " *";
            }
            else{
                cout<<  "  ";
            }
        }
        cout<<endl;
    }
}