// // Approach 1

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>arr1= {1,2,3,4,5,6};
//     int arr[] = {1,2,3,4,5,6};
//     // int n = sizeof(arr)/sizeof(arr[0]);
//     int ele = 40;
    
//     // for(int i=0;i<n;i++){
//         //     cout<<arr[i]<<" ";
//         // }
//         arr1.insert(arr1.begin(),ele);
//         int n=arr1.size();
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<" ";
//     }
//     return 0;
// }

// Approach 2

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele = 50;

    for(int i=n-2;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = ele;
    cout<<"After insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}