
// Approach 1

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>arr = {1,45,75,14,85};
//     int pos = 2;

//     cout<<"Before deletion: "<<endl;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     arr.erase(arr.begin()+pos-1);
//     cout<<endl;

//     cout<<"After deletion: "<<endl;
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Approach 2

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr = {4,7,5,6,2};
    int n = arr.size();
    int pos = 1;

    cout<<"Before deletion: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=pos;i<n;i++){
        arr[i-1]=arr[i];
    }
    if(pos<=n){
    n--;
    }    
    cout<<endl;
    cout<<"After deletion: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}