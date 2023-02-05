#include<iostream>
using namespace std;
main()
{
   bool isfound=false;
   int letter;
   string  str;
   cout<<"enter string";
   cin>>str;
   cout<<"enter the letter you want to search";
   cin>>letter;
   for(int i=0;str[i]!='\0';i++)
   {
    if(str[i]==letter)
    {
        isfound=true;
        break;
    }
   }
    if(isfound==true)
    {
       cout<<letter<<" is found in "<<str;
    }
    else
    {
        cout<<"not found";

    }
   }