#include<iostream>
using namespace std;
int Array(int arr[],int size, int key){
int s=0, e=size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;

        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;


}
int main(){
    //input in array
    int size;
    cout<<"enter a size:";
    cin>>size;
    int arr[size];
    cout<<"enetr "<<  size  <<"sorted elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
}
int key;
cout<<"enetr a elements to saerch";
cin>> key;
//yaha se function se call ho rha h
int index = Array(arr,size,key);
if  ( index != -1){
    cout<<"index is:"<<index<<endl;
}
else {
    cout<<"element not found"<<endl;
}
return 0;

}





