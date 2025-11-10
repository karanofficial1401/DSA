#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int n;
   cout<<"Enter the number of rows: ";
   cin>>n;

   int m;
   cout<<"Enter the number of columns: ";
   cin>>m;

   vector<vector<int>> matrix(n,vector<int>(m));

   for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   cin>>matrix[i][j];

   for(int j=0;j<m;j++){
    if(j%2==0){
        for(int i=0;i<n;i++)
        cout<<matrix[i][j]<<" ";
    }else{
        for(int i=n-1;i>=0;i--)
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }

}