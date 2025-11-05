#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10, 20, 30, 40};
    int n = arr.size();
    int ele = 40;
    int pos = 2;

    cout<<"Before insertion:\n ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    arr[pos-1]=ele;
    cout<<endl;
    cout<<"After insertion:\n ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}