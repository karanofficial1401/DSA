
// Approach 1

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> arr = {1,2,3,4,5};

//     cout << "Before Deletion: " << endl;
//     for(int i=0; i<arr.size(); i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // Erase first element
//     arr.erase(arr.begin());

//     cout << "After Deletion: " << endl;
//     for(int i=0; i<arr.size(); i++){  // <-- yaha arr.size() use karna hai
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// Approach 2


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    cout<<"Before insertion: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    n--;
    cout<<endl;
    cout<<"After deletion: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}