#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // create 2D vector of size 3x4 initialized with 1
    
    int n,m;
    cout<<"Enter the rows and column: ";
    cin>>n>>m;
     
    
    vector<vector<int>> matrix(n, vector<int>(m, 1));

    // print the matrix
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl; // new line after each row
    // }


    // cout<<"rows: "<<matrix.size();
    // cout<<endl;
    // cout<<"columns: "<<matrix[0].size();

    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];


    
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
       cout<<matrix[i][j]<<" ";
       cout<<endl;
    }


    return 0;
}
