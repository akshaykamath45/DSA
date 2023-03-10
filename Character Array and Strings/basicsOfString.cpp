#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    //No need to declare a array for strings unlike we declare a array for character array.
    //Sub string,find,replace,erase,compare functions are very important.
    string str;
    cout<<"Enter a string : \n";
    // cin>>string;
    
    getline(cin,str);
    
    cout<<"length : "<<str.length()<<endl;
    cout<<"isEmpty : "<<str.empty()<<endl;//checks whether string is empty ot not empty.
    cout<<"Pushing 'A' to the string "<<endl;
    str.push_back('A');//Append at the end.
    cout<<str<<endl;
    
    cout<<"After Popping the last element"<<endl;
    str.pop_back();//remove the last element.
    cout<<str<<endl;
    
    cout<<"Printing Sub string "<<endl;
    //Sub string
    //(0,k)==>0 is the starting index,k is the ending index.Very Important.
    cout<<str.substr(0,3)<<endl;

    string a="love";
    string b="love";
    if(a.compare(b)==0){//compare is case-sensitive function. 
        cout<<"Both the strings are equal!"<<endl;
    }else{
        cout<<"Strings are not equal,Sorry.."<<endl;
    }
    
    string sentence="hello how are you doing ?";
    string target="how";
    string target2="bro";
    //Finding the index from which the word/string is starting.
    cout<<sentence.find(target)<<endl;
    if(sentence.find(target2)==std::string::npos){//Just to handle the not found case.
        cout<<"Not Found"<<endl;
    }
    
    //Replacing Strings
    string str1="This is my first message.";
    string word="Akshay";
    //Start form 0th character,end till 4th character,replace them with word.
    str1.replace(0,4,word);
    cout<<str1<<endl;
    
    
    //Erasing Strings
    string str2="ABCDEFGHIJLKLMNOP";
    //Erasing characters form 0 ndex to 4th index.
    str2.erase(0,4);
    cout<<str2<<endl;
    return 0;
}