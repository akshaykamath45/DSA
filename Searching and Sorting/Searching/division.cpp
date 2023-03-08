#include <iostream>
using namespace std;

int findQuotient(int dividend,int divisor){
    int start=0;
    int end=abs(dividend);
    int mid=start+(end-start)/2;
    int ans=1;
    while(start<=end){
        mid=start+(end-start)/2;
        
        if(abs(mid*divisor)==abs(dividend)){
           ans=mid;
           break;
        }
        else if(abs(mid*divisor)>abs(dividend)){
            //left search
            end=mid-1;
        }
        else{
            ans=mid;//we store the answer first
            start=mid+1;
        }
    }
    if(divisor>0 && dividend>0 || divisor<0 && dividend<0){
        return ans;
    }
    else{
        return -ans;
    }

}

int main()
{
  int dividend=-21;
  int divisor=7;
  int quotient=findQuotient(dividend,divisor);
  cout<<"Quotient is "<<quotient<<endl;
  return 0;
}