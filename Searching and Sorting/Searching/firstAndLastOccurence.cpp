#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> arr,int target){
    //For firstOccurence
    int s=0;//start
    int e=arr.size()-1;//end
    int m=s+(e-s)/2;//mid
    int ans=-1;

    while(s<=e){
        m=s+(e-s)/2;
        if(arr[m]==target){
            ans=m;
            e=m-1;
        }
        else if(target>arr[m]){
            s=m+1;//searching right
        }
        else{
            e=m-1;//searching left
        }
    }

    //For lastOccurence
    int s1=0;//start
    int e1=arr.size()-1;//end
    int m1=s+(e1-s1)/2;//mid
    int ans1=-1;

    while(s1<=e1){

        m1=s1+(e1-s1)/2;
        if(arr[m1]==target){
            ans1=m1;
            s1=m1+1;

        }
        else if(target>arr[m1]){
            s1=m1+1;//searching right
        }
        else{
            e1=m1-1;//searching left
        }
    }

    //Storing the result in an vector
    vector<int> out;
    out.push_back(ans);
    out.push_back(ans1);
    return out;

}

int main()
{
  vector <int> arr{5,7,7,8,8,10};
  int target=8;
  vector<int> bothOccur=searchRange(arr,target);
    for(int i=0;i<bothOccur.size();i++){
        cout<<bothOccur[i]<<" ";
    }
}