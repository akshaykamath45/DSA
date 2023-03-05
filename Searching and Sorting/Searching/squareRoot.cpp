#include <iostream>
using namespace std;

int findSqrt(int num){
   int s=0;
   int e=num-1;
   int ans=-1;
   while(s<=e){
       int m=s+(e-s)/2;
       if(m*m==num){
           return m;
       }
       else if(m*m>num){
           //search in left
            e=m-1;           
       }
       else{
       
         //store answer    
           ans=m;
         
         //search in right
           s=m+1;
       }
   }
   return ans;
   
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ans=findSqrt(n);
    cout<<"Ans is "<<ans<<endl;
    double precision;
    cout<<"Enter the Precision you want : "<<endl;
    cin>>precision;
    double finalAns=ans;
    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=finalAns;j*j<=n;j=j+step){
            finalAns=j;
        }
        step=step/10;
    }
    cout<<"Final answer is "<<finalAns<<endl;
    return 0;
}