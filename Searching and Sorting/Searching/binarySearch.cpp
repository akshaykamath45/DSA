#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
           return mid;

        }
        else if(key>arr[mid]){
            //search in right
            start=mid+1;

        }
        else{
               //search in left
              end=mid-1;
        }

    }
    return -1;
}

int main()
{
    int arr[6]={0,1,2,3,4,5};
    int size=6;
    int key=0;
    int index=binarySearch(arr,size,key);
    if(index==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at index number "<<index<<endl;
    }
    return 0;
}