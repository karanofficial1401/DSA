#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // // create vector declare
    // vector<int>v;
    // vector<int>v1(5,1);
    // // size and capacity
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(12);
    // v.push_back(121);
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    // // update value
    // v[2]=45;
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(55);
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;

    // vector<int>v3 = {1,2,3,4,5};
    // cout<<"size of v3: "<<v3.size()<<endl;
    // cout<<"capacity of v3: "<<v3.capacity()<<endl;
    // v3.push_back(74);
    // cout<<"size of v3: "<<v3.size()<<endl;
    // cout<<"capacity of v3: "<<v3.capacity()<<endl;

    //   Delete the value from vector
    // vector<int>vnew;
    // vnew.push_back(45);
    // vnew.push_back(455);
    // vnew.push_back(457);
    // vnew.push_back(459);
    // vnew.push_back(452);
    // vnew.push_back(451);
    // vnew.pop_back();
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew: "<<vnew.capacity()<<endl;

    // vnew.erase(vnew.begin()+2);
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew: "<<vnew.capacity()<<endl;

    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }
    // vnew.insert(vnew.begin()+1,50);
    // cout<<endl;
    // for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;

    // vnew[1] = 23;
    //  for(int i=0;i<vnew.size();i++){
    //     cout<<vnew[i]<<" ";
    // }
    // cout<<endl;
    // vnew.clear();
    // cout<<"size of vnew: "<<vnew.size()<<endl;
    // cout<<"capacity of vnew: "<<vnew.capacity()<<endl;



    // vector<int>arr;
    // arr.push_back(12);
    // arr.push_back(121);
    // arr.push_back(124);
    // arr.push_back(125);
    // arr.push_back(128);
    // arr.push_back(120);
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // vector<int>a;
    // // copy value of 1 vector to another

    // a = arr;
    // cout<<a.size();
    // cout<<endl;
    // for(auto it = arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // for(auto i:arr)
    // cout<<i<<" ";

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(51);
    ans.push_back(55);
    ans.push_back(57);
    ans.push_back(52);
    ans.push_back(53);

    // sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    // // sort in decreasing order
    // sort(ans.rbegin(),ans.rend());
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    cout<<endl;
    // search in binary search
    cout<<binary_search(ans.begin(),ans.end(),57)<<endl;
    cout<<find(ans.begin(),ans.end(),53)-ans.begin()<<endl;




}