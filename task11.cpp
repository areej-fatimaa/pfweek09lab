#include<iostream>
using namespace std;
main()
{
    string str;
    cout<<"enter string ";
    getline(cin,str); // to include spaces in string
    char letter;
    cout<<"enter letter";
    cin>>letter;
  
    int i=str.length();     //to calcuate length of string
    if(str[i-1]==letter)
    {
        cout<<"true";
    }
    else 
    {
        cout<<"false";
    }
    
  
}
