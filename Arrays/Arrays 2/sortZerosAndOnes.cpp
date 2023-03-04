#include<iostream>
#include<vector>
// #include<bits/stdc++.h> for swap function
using namespace std;
int main(){
   //Sort 0's and 1'
   vector<int> arr{0,1,0,1,1,0,1,0,1,1};
   int start=0;
   int end=arr.size()-1;
   int i=0;
   while(start<=end){
       if(arr[i]==0){
           //swap from left
           swap(arr[i],arr[start]);
           i++;
           start++;
       }
       if(arr[i]==1){
           //swap from right
           swap(arr[end],arr[i]);
           end--;
      
       }
   }
   //Prinitng after sorting
   for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
    return 0;    
