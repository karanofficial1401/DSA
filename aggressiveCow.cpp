#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int k;
    cout<<"Enter the numbers of stalls: ";
    cin>>n;

    vector<int> stalls(n);
    cout<<"Enter the stalls position: ";
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }

    cout<<"Enter the numbers of cows: ";
    cin>>k;

    sort(stalls.begin(),stalls.end());

    int start = 1;
    int end = stalls[n-1]-stalls[0];
    int mid;
    int ans;

    while(start<=end){
        mid = start + (end-start)/2;
        int count = 1;
        int pos = stalls[0];
        for(int i=1;i<n;i++){
            if(pos+mid<=stalls[i]){
                count++;
                pos = stalls[i];
            }
        }
        if(count<k){
            end = mid-1;
        }
        else{
            ans = mid;
            start = mid+1;
        }
    }
    cout << "Maximum minimum distance: " << ans << endl;
    return 0;
}