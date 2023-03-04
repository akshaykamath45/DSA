#include<iostream>
using namespace std;


int main(){
   int arr[1000];
   int n;
   cout<<"Enter the number of elements for input : ";
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       cout<<2*arr[i]<<" ";
   }
   
}