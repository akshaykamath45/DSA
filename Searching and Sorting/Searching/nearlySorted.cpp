#include <iostream>
#include <vector>

using namespace std;

// Nearly Sorted Arrray→In a Sorted Array,The Element would be found either 
// at (i-1) or (i)  or (i+1) index .
int binarySearch(vector<int> &a,int target){
    int start=0;
    int end=a.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid-1]==target && mid-1>=0){//mid-1>=s is more optimised
            return mid-1;
        }
        else if(a[mid+1]==target && mid+1<a.size()){//mid+1<=e is more optimised
            return mid+1;
        }
        else if(target>a[mid]){
            //search  in right side
            start=mid+2;//Since we already checked mid-1 and mid+1
        }
        else{
            end=mid-2;//Since we already checked mid-1 and mid+1
        }
    }
    return -1;
}
using namespace std;

int main()
{
    vector<int> arr={10,3,40,20,50,80,70};//Nearly Sorted Array
    int ans=binarySearch(arr,10);
    if(ans==-1){
        cout<<"Not Found"<<endl;
    }
    else {
        cout<<"Element present at index "<<ans<<endl;
    }
    return 0;
}