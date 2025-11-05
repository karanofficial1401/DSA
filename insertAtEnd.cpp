// // {1,2,3,4,5} = {1,2,3,4,5,6}

// // Approach 1

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>arr = {4,5,6,7,8};
//     int ele = 57;
//     int n = arr.size();

//     cout<<"before insertion"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";   
//     }
//     arr.push_back(ele);
//     n = arr.size();
//     cout<<endl;
//     cout<<"After insertion: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// // C++ program to insert given element at the end 
// // of an array using custom methods

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> arr = {10, 20, 30, 40, 0};
  	int ele = 50;
    cout << "Array before insertion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
	
  	arr[n] = ele;

    cout << "\nArray after insertion\n";
    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";

    return 0;
}