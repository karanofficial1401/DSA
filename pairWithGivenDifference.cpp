// 2,3,5,10,50,80  and differnce = 45  output = [50,5]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the difference: ";
    cin>>k;

    sort(arr.begin(),arr.end());

    int start = 0;
    int end = 1;
    vector<int>ans;
    while(end<n){
        if(arr[end]-arr[start]==k){
        ans.push_back(end);
        ans.push_back(start);
        break;
        }
        else if(arr[end]-arr[start]<k){
            end++;
        }
        else{
            start++;
        }
    }
    cout<<"the index of differences is: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}