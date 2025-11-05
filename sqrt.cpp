#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int mid;
    int start = 0;
    int end = n-1;
    int ans = -1;
    if(n==0 || n==1){
        cout<<n;
        return 0;
    }
    while(start<=end){
        mid = start + (end-start)/2;
        if(mid==n/mid){
        ans = mid;
        break;
        }
        else if(mid<n/mid){
        ans = mid;
        start = mid+1;
        }
        else{
        end = mid-1;
        }
    }
        cout<<ans;
}