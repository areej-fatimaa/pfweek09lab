#include<iostream>
using namespace std;
main()
{
    string str;
    cout<<"string btao";
     int idx=0;
    getline(cin,str);
    int i=str.length();     //to calcuate length of string
    for(int n=i-1;n>=0;n--)
    {
        cout<<str[n];
    }
    
  
}
