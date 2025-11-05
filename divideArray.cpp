#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr){
    int prefix = 0 , total_sum = 0 , n = arr.size();
    for(int i=0;i<n;i++){
        total_sum+=arr[i];
    }
    for(int i=0;i<arr.size()-1;i++){
        prefix+=arr[i];
        int ans;
        ans = total_sum - prefix;
        if(ans==prefix)
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>v(n);
    cout<<"Enter the element in array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<divide(v);

}