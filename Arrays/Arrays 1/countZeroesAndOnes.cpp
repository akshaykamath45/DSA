#include<iostream>
using namespace std;

void countZerosAndOnes(int arr[],int size){
   int countZero=0;
   int countOne=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            countZero++;
        }
        else if(arr[i]==1){
            countOne++;
        }
    }
    cout<<"Number of 0's are "<<countZero<<endl;
    cout<<"Number of 1's are "<<countOne<<endl;
}


int main(){
 int arr[15]={0,0,1,1,0,1,1,0,0,1,0,1,0,0,1};
 int size=15;
 countZerosAndOnes(arr,size);
}