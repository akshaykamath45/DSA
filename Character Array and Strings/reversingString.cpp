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

//Time Complexity is O(1)
void reverseCharArray(char name[]){
    int i=0;
    int j=getLength(name)-1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    } 
}
int main()
{
    char name[100];
    cout<<"Enter the string you want to reverse :"<<endl;
    cin.getline(name,50);
    reverseCharArray(name);
    cout<<"After reversing the string,the array is "<<name<<endl;
}