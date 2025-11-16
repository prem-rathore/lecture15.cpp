//pivot in the array
//sorted rotated in array
//binary search mai halve krke solve krte h o(logn)
#include<iostream>
using namespace std;

/*long long int binarySearch(int n){
    int s=0;
    int e=n;
    long long int mid=s+(s-e)/2;
    long long int ans = 0;
    while (s<=e){
        long long int square =mid*mid;
        if(square==n) 
        return mid;
        if(square<n){
            ans=mid;
            s=mid+1;

        }
        else{
            e=mid-1;

        }
        mid=s+(e-s)/2;
        //mid ko har iteration ke baad update krna pdta h

    }
    return ans;
}
int main(){
    int number;
    cout<<"enter a number:";
    cin>>number;

    int result=binarySearch(number);
    cout<<"integer square root of "<< number <<" is "<<result;
    return 0;
}*/
long long int squarerootInteger(int n){
    int s=0;
    int e=n;
    long long int mid=s+(s-e)/2;
    long long int ans = 0;
    while (s<=e){
        long long int square =mid*mid;
        if(square==n) 
        return mid;
        if(square<n){
            ans=mid;
            s=mid+1;

        }
        else{
            e=mid-1;

        }
        mid=s+(e-s)/2;
        //mid ko har iteration ke baad update krna pdta h

    }
    return ans;
}
double morePrecision(int n,int precision,int tempsol){
double factor=1;
double ans=tempsol;
for(int i=0;i<precision;i++){
    factor=factor/10;
    for(double j=ans; j*j<n;j=j+factor){
        ans =j;
    }
}
return ans;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int tempsol=squarerootInteger(n);
    cout<<"answer is:"<<morePrecision(n,3,tempsol)<<endl;
    return 0;
}