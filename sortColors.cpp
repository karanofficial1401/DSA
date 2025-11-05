    #include<iostream>
    #include<vector>
    using namespace std;

    int main(){
        int n;
        cout<<"Enter the size of aaray: ";
        cin>>n;

        vector<int>arr(n);
        cout<<"Enter the elements in array: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int i=0,j=0,k=0;
        for(int l=0;l<n;l++){
            if(arr[l]==0){
                i++;
            }else if(arr[l]==1){
                j++;
            }else{
                k++;
            }
        }

        int l=0;
        while(i){
            arr[l]=0;
            l++;
            i--;
        }
        while(j){
            arr[l]=1;
            l++;
            j--;
        }
        while(k){
            arr[l]=2;
            l++;
            k--;
        }

        cout<<"sort colors: ";
        for(int l=0;l<n;l++){
            cout<<arr[l]<<" ";
        }
        return 0;   
    }