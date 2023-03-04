#include <iostream>
#include<vector>
using namespace std;

void printWaveMatrix(vector<vector<int> >arr){
    int m=arr.size();//no of rows
    int n=arr[0].size();//no of colmns
    for(int j=0;j<n;j++){
        //even columns-->top to bottom
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            //odd columns-->bottom to top
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main()
{
  vector<vector<int> > arr{
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}
  };
  printWaveMatrix(arr);
  return 0;
}