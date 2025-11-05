// input = 100010110    output = 000001111  using two pointer

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements in the aaray: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start = 0;
    int end = n-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }
            else{
                if(arr[end]==0)
                swap(arr[start],arr[end]);
                else
                end--;
            }
    }  
    cout<<"Array after segregation: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}