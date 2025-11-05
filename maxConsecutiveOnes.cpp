#include<iostream>
#include<vector>
using namespace std;

int main(){

        int n;
        cout<<"Enter the size of aaray: ";
        cin>>n;

        vector<int>arr(n);
        cout<<"Enter the elements in array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
            
        int count = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                count++;
                ans = max(count,ans);
            }
            else{
                count = 0;
            }
        }
        cout<<"Max consecutive Ones: "<<ans;
        
        return 0;
}