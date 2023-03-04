#include<iostream>
using namespace std;

int maximum(int arr[],int size){
   int max=INT_MIN;
    for(int i=0;i<size;i++){
    
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int main(){
  
 int arr[5]={2,12,5,18,6};
 int size=5;
 int ans=maximum(arr,size);
 cout<<ans;
   
}