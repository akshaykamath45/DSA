#include<iostream>
using namespace std;


int main(){
   int arr[1000];
   int n;//Size of the array
   int k;//Key to be searched;
   cout<<"Enter the number of elements for input : ";
   cin>>n;
   cout<<"Enter the elements : "<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"Enter the key to be searched : "<<endl;
   cin>>k;
   for(int i=0;i<n;i++){
     if(arr[i]==k){
         cout<<k<<" is present at index "<<i<<endl;
         break;
     }

   }
   return -1;
   
}