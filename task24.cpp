#include<iostream>
using namespace std;
main()
{
    string str;
    cout<<"enter sentence";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            continue;
        }
        else
        {
           str[i];
        }
        cout<<str[i];
    }
      
}