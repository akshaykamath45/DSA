#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,20,30,40,50,60,70};
    int sum=70;
    //Printing pairs;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            // cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
    return 0;    
}