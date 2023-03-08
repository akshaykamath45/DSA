#include <iostream>
using namespace std;
#include<vector>


//Bubble Sort-->We run two loops,we just compare the 2 adjacent elements through each iteration,after each iteration the maximum element will get sorted at the end,hence we run the loop from j=0 to n-(i+1)
//Worst and Average Case Time Complexity is O(n^2).
//Best Case Time Complexity,if it is sorted array will be O(n).This is an optimised bubble sort approach.

void bubbleSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int didSwap=0;
        for(int j=0;j<=n-(i+1);j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
}


int main()
{

    vector<int>arr={113,46,24,52,20,9};
    bubbleSort(arr);
    cout<<"Afer sorting the array : "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}


