#include <iostream>
#include<string.h>
using namespace std;

//We can directly take input in the character array or in a  sequence using for loop
int main()
{
    char ch[100];
    cout<<"Enter your name : \n";
   // cin>>ch;//It will stop when we assign a space or tab.
    cin.getline(ch,50);//50 is the max size
    cout<<"Aapka naam "<<ch<<" hai"<<endl;//By default null character is assigned in the array,when the string ends.It indicates the termination.
    // cout<<ch[6]<<endl;
    
    return 0;
}

