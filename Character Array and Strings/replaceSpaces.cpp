#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
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


//Time Complexity O(n)
void replaceSpaces(char string[]){
    int i=0;
    int n=getLength(string)-1;//O(n)
    for(int i=0;i<=n;i++)//O(n)
    {
        if(string[i]==' '){
            string[i]='@';
        }
    }
}
int main()
{
    char name[100];
    cout<<"Enter the string  :"<<endl;
    cin.getline(name,50);
    replaceSpaces(name);
    cout<<"After replacing the empty spaces,the array is "<<name<<endl;
}