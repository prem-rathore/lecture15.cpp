#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
//binary search
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;

        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[8]={3,5,7,11,13,17,23,25};
    int evenIndex= binarySearch(even,6,4);
    cout<<"INDEX OF 4 IS:"<<evenIndex<<endl;
    int oddIndex=binarySearch(odd,8,13);
    cout<<"index of 13 is:"<<oddIndex<<endl;
    return 0;
}