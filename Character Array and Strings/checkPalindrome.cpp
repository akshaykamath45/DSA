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


//Time Complexity O(n),but Space Compelxity is O(1).
bool checkPalindrome(char string[]){
    int i=0;
    int j=getLength(string)-1;
    while(i<=j){
        if(string[i]!=string[j]){
           return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
    
}
int main()
{
    char name[100];
    cout<<"Enter the string  :"<<endl;
    cin.getline(name,50);
    bool ans=checkPalindrome(name);
    if(ans==1){
        cout<<"Its palindrome"<<endl;
    }else{
        cout<<"Not a plaindrome"<<endl;
    }
}
