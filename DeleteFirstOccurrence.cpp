#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr = {10, 20,20,20, 30, 40};
    int ele = 20;

    cout<<"Before deletion: "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    auto it = find(arr.begin(),arr.end(),ele);
    if(it!=arr.end()){
    arr.erase(it);
    }

    cout<<endl;
    cout<<"After deletion: "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}