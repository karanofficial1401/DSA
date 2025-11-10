#include<iostream>
using namespace std;

int main(){
    int arr[5][4]={3,4,7,18,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,1};
    int sum=0;
    int index=-1;
    for(int i=0;i<5;i++){
        int total=0;
        for(int j=0;j<4;j++){
            total+=arr[i][j];
        
            if(total>sum){
            sum=total;
            index=i;  
            }  
        }
    }
    cout << "Row with maximum sum: " << index << endl;
    cout << "Maximum sum: " << sum << endl;
    return 0;

}