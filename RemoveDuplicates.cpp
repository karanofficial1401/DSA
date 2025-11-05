#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = 1;
    while(end<n){
        if(arr[start]!=arr[end]){
            start++;
            arr[start] = arr[end];
        }
        end++;
    }
    cout<<"Number of unique elements in array: ";
    cout<<start+1;
}