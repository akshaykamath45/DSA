#include <iostream>
using namespace std;
#include<bits/stdc++.h>


void maxAndMinElement(int arr[][3],int rows,int columns){
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    cout<<"Maximum Element in the given 2D Array is : "<<max<<endl;
    cout<<"Minimum Element in the given 2D Array is : "<<min<<endl;
}
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,13,6},
        {2,4,8}
    };

    maxAndMinElement(arr,3,3);
   
    return 0;
}