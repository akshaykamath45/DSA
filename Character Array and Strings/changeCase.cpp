#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

//Time Complexity O(n)
//Space Complexity O(1)

//Upper to Lower Case:we do -'A'+'a' to convert into small case
void convertUpperToLower(char string[]){
    int n=strlen(string);
    for(int i=0;i<n;i++){
        string[i]=string[i]-'A'+'a';
    }
}

//Lower to Upper Case : we do -'a'+'A' to convert into upper case.
void convertLowerToUpper(char string[]){
    int n=strlen(string);
    for(int i=0;i<n;i++){
        string[i]=string[i]-'a'+'A';
    }
}

int main()
{
    char name[100];
    cout<<"Enter the string  :"<<endl;
    cin.getline(name,50);
    convertUpperToLower(name);
    cout<<"After converting upper to lower case,the final string is "<<name<<endl;
    // convertLowerToUpper(name);
    // cout<<"After converting lower case to upper case,the final string is "<<name<<endl;
    
}