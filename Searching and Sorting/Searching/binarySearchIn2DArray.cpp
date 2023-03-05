#include <iostream>
using namespace std;

int binarySearch(int arr[][4],int n,int m,int target){
    int s=0;
    int totalSize=n*m;
    int e=n*m-1;
    //n is the number of rows
    //m is the number of columns
    while(s<=e){
        int mid=s+(e-s)/2;
        int rowIndex=mid/m;
        int columnIndex=mid%m;
        int element=arr[rowIndex][columnIndex];
        if(element==target){
            return mid;
        }
        else if(element<target){
            //search in right
            s=mid+1;
        }
        else{
            //search in left
            e=mid-1;
        }

    }
    return 0;
}

int main()
{
  int arr[4][4]={
      {0,1,2,3},
      {4,5,6,7},
      {8,9,10,11},
      {12,13,14,15}
  };
  int ans=binarySearch(arr,4,4,10);
  if(ans!=0){
  cout<<"Element present at index "<<ans<<endl;
  }
  else{
      cout<<"Element not found"<<endl;
  }
}