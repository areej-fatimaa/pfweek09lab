#include<iostream>
using namespace std;
main()
{
    string str;
    cout<<"string btao";
    getline(cin,str);
    int i=str.length();     //to calcuate length of string
    for(int n=0;n<i;n++)
    {
        cout<<str[n]<<"is at "<<n<<"th "<<"place"<<endl;
    }
}