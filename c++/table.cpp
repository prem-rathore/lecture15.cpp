#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"the table of "<< n <<" is :"<<endl;
    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i <<" = "<< n*i << endl;
    }
}