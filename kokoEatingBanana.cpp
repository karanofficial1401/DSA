#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of piles: ";
    cin>>n;

    vector<int> piles(n);
    cout<<"Enter bananas in each piles: ";
    for(int i=0;i<n;i++){
    cin>>piles[i];
    }

    int h;
    cout<<"Enter total hours koko has: ";
    cin>>h;
    int start = 0;
    int end = 0;
    int mid;
    int ans;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum+=piles[i];
        end = max(end,piles[i]);
    }
    start = sum/h;
    if(start==0){
        start = 1;
    }
        while(start<=end){
            mid = start+(end-start)/2;
            long long total_time = 0;
            for(int i=0;i<n;i++){
                total_time += piles[i]/mid;
                if(piles[i]%mid!=0)
                total_time++;
            }
            if(total_time>h){
                start = mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
        }
        cout << "\nMinimum eating speed required: " << ans << " bananas/hour" << endl;
        return 0;
    
}