#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // prefix sum
    vector<int>prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }

    // suffix sum
    vector<int>suffix(n);
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i] = suffix[i+1]+arr[i];
    }

    // print prefix sum
    cout<<"Prefix sum: ";
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    
    // suffix sum
    cout<<"suffix sum: ";
    for(int i=0;i<n;i++){
        cout<<suffix[i]<<" ";
    }
    cout<<endl;
    return 0;
}