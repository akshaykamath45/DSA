#include <iostream>
using namespace std;



void FindTranspose(int arr[][3],int rows,int columns,int transpose[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
           transpose[j][i]=arr[i][j];
        }
    }
    cout<<"Transpose of the Given 2D Matrix/Array is : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
           cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,13,6},
        {2,4,8}
    };
    int transpose[3][3];

    FindTranspose(arr,3,3,transpose);

    return 0;
}