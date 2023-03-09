#include <iostream>
#include<string.h>
using namespace std;


int getLength(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}

int main()
{
   char name[100];
   cout<<"Enter you name and get the length "<<endl;
   
   //cin>>name;
   cin.getline(name,50);
   cout<<"Total length of the string is "<<getLength(name)<<endl;

   //Using strlen()
   cout<<"Directly using strlen function,we get the total length as "<<strlen(name)<<endl;
   return 0;
}