#include<iostream>
#include<vector>
using namespace std;
    
int main(){
    vector<int> arr;
    // int ans=sizeof(arr)/sizeof(int);
    // cout<<ans;
    // cout<<arr.capacity()<<endl;
    
    //insert
    arr.push_back(5);
    arr.push_back(6);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //remove/delete
    arr.pop_back();
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Initalising array with some value
    vector<int> brr(10,-1);
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
     return 0;
}