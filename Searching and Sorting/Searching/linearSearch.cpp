#include <iostream>
using namespace std;

void linearSearch(int arr[],int size,int key){
    bool check=false;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            check=true;

        }
    }
    if(check){
          cout<<"Element Found";
    }
    else{
          cout<<"Element not Found";
    }
}

int main()
{

    int arr[6]={8,9,2,5,4,0};
    int size=6;
    int key=0;
    linearSearch(arr,size,key);

    return 0;
}