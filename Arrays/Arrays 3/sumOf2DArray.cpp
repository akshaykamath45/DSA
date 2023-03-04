#include <iostream>
using namespace std;

int main()
{
    
    int r,c;
    cout<<"Enter the number of rows : "<<endl;
    cin>>r;
    cout<<"Enter the number of columns : "<<endl;
    cin>>c;
    int arr[r][c];
    int sum=0;
    cout<<"Enter "<<r*c<<" Elements to be inserted inside 2-D Array"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            // cout<<arr[i][j]<<" ";
             sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }


    return 0;
}