#include <iostream>
using namespace std;
#include<vector>


// Find the odd occuring element in an array.
// All elements occur even number of times except one.
// All repeating elements occur in pair.
// Pairs are not adjacent (there can not be more than 2 consective occurence of any element)
// Find the element that appears odd number of times.
// Array 1 1 2 2 3 3 4 4 3 600 600 4  4
// Index 0 1 2 3 4 5 6 7 8 9   10  11 12

// Observations based on the indexes: Answer would be present on even index and To the left side of the answer,In all the pairs,1st number of the pair will be present on even index,2nd numbert will be presen on odd index,On its right side,it will be opposite.

int oddOccuringElement(vector<int> &a){
    int s=0;
    int e=a.size()-1;
    int m=s+(e-s)/2;
    while(s<=e){
    int m=s+(e-s)/2;
        if(s==e){
            return s;//single element
            //return e;
        }
        
        //2 cases ->mid-even or mid-odd
        if(m%2==0){//Mid is at even index,even,odd pair exists on left,so I will search on right
            if(a[m]==a[m+1]){
                //search in right
                s=m+2;
            }
            else{
                e=m;//this can be the answer
            }
        }
        else{
            if(a[m]==a[m-1]){
                s=m+1;
            }
            else{
                e=m-1;
            } 
        }
    }
    return 0;
}
int main()
{

vector<int>arr={1,1,2,2,3,3,4,4,3,600,600,4,4};
int ans=oddOccuringElement(arr);
cout<<"Answer is "<<arr[ans]<<" which is present at index "<<ans<<endl;
  return 0;
}