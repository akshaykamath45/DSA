#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
   //Moving all Negative Elements to Left Side of The Array;
   vector<int> arr{1,2,-3,4,-5,6,-4,-7,-9,9,10};
   int low=0;
   int high=arr.size()-1;

   while(low<high){
        if(arr[low]<0){
            low--;
       }
       else if(arr[high]>0){
           high++;
       }
       else{
           swap(arr[low],arr[high]);
       }

   }
   //Prinitng after sorting
   for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
    return 0;    
}