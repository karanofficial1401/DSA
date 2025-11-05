#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool found = false;
    int target = 7;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found = true;
            break;
        }
    }
    cout<<found;
}