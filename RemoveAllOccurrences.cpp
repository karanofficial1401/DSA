#include<iostream>
#include<vector>
using namespace std;

int RemoveElement(vector<int>arr , int ele){
    int k=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=ele){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int>arr = {1,2,2,2,3,4,5,6};
    int ele = 2;
    cout<< RemoveElement(arr,ele)<<endl;
    return 0;
}