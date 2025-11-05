#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    int n = arr.size();
    cout<<"before Deletion: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    n--;
    cout<<endl;
    cout<<"After Deletion: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}