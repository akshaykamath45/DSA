#include <iostream>
using namespace std;


void findKey(int arr[][3],int rows,int columns,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(arr[i][j]==key){
                
                cout<<"true,key found!!"<<endl;
                cout<<key<<" is found at index ["<<i<<","<<j<<"]"<<endl;
                break;
            }
          
        }
    }
}
// Using Bool
// bool findKey(int arr[][3],int rows,int columns,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(arr[i][j]==key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
int main()
{
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {2,4,8}
    };
    int key=8;
    findKey(arr,3,3,key);

    //int key=9;
    // if(findKey(arr,3,3,key)){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }
    
    return 0;
}