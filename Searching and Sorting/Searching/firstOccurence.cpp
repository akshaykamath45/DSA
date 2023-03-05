#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> arr,int target){
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
    return ans;
}

int main()
{

   vector <int> arr{5,7,7,8,8,10};
   int target=8;
  int firstOccur=firstOccurence(arr,target);
  if(firstOccur==-1){
      cout<<"Not found";
  }
  else{
      cout<<"First Occured at Index Number : "<<firstOccur<<endl;
  }
}