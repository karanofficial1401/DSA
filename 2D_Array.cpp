#include<iostream>
#include<vector>
using namespace std;

void printcol(int arr[][3], int row, int col){
    // column wise
    for(int j=0;j<col;j++)
    for(int i=0;i<row;i++)
    cout<<arr[i][j]<<" ";
}

int main(){ 
    // create 2D array
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // print all the element in the array row wise
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         // cout<<arr[i][j]<<" ";
    //     }
    // }

    // print all the elements in array column wise fuction call
    // printcol(arr,4,3);

    // find an element in our array
    int x=7;

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==x)
            {
                cout<<"yes";
                return 0;
            }
        }
    }
    cout<<"No";
}