#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
   vector< vector<int> > arr;
   vector<int> a={1,2,3,4,5};
   vector<int> b={6,7};
   vector<int> c={1,4,9,10};
   arr.push_back(a);
   arr.push_back(b);
   arr.push_back(c);
   cout<<"Printing 2D Vector"<<endl;
//   for(int i=0;i<arr.size();i++){
//       for(int j=0;j<arr[i].size();j++){
//           cout<<arr[i][j]<<" ";
//       }
//       cout<<endl;
//   }
   
   //Initializing Rows and Columns in 2D Vector
   int row=5;
   int col=5;
   vector<vector<int> >brr(row,vector<int>(col,-8));
    for(int i=0;i<brr.size();i++){
       for(int j=0;j<brr[i].size();j++){
           cout<<brr[i][j]<<" ";
       }
       cout<<endl;
   }
   //Printing Value at 2nd Row and 3rd Colum;
   cout<<endl;
   cout<<brr[2][3];
   return 0;
}