// Traversal Array = {1,2,3,4,5} output -> 1,2,3,4,5

#include<iostream>
using namespace std;
 
int main(){
    int arr[] = {4, 5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Traversal Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}