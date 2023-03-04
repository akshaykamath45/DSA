#include<iostream>
// #include<bits/stdc++.h> //for swap function
using namespace std;
// void swap(int a,int b){
//     int t=a;
//     a=b;
//     b=t;
//     cout<<a<<b;
// }
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;
    int start=0;
    int end=size-1;
    while(start<=end){
        
        //Easy Shortcut
        // cout<<arr[end]<<" ";
        // end--;
        
        //step1:
        swap(arr[start],arr[end]);
        //step2:
        start++;
        //step3:
        end--;
    }
    // step4:printing array 
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
     }
    // swap(2,4);
    return 0;
}
     