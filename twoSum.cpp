// two sum with sorted array using two pointer

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter target sum: ";
    cin>>target;

    int start = 0;
    int end = arr.size()-1;

    vector<int>ans;
    while(start<end){
        if(arr[start]+arr[end]==target){
            ans.push_back(start);
            ans.push_back(end);
            break;
        }
        else if(arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
            
        }
    }

 
    if (!ans.empty()) {
        cout << "Indexes: " << ans[0] << " " << ans[1] << endl;
        cout << "Numbers: " << arr[ans[0]] << " and " << arr[ans[1]] << endl;
    } else {
        cout << "No such pair found!" << endl;
    }
    return 0;
}