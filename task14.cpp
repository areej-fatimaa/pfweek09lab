#include<iostream>
using namespace std;
main()
{
    string str;
    int counter=0;
    cout<<"string btao";
    getline(cin,str); 
    char letter;
    int i=str.length();
    for(int n=0;n<=i;n++)
    {   
    if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u')
    {
        counter++;
    }
    }
     cout<<counter;
}
    