#include<iostream>
using namespace std;
main()
{
    int size=0;
    float tresist=0;
    cout<<"enter size";
    cin>>size;
    float resis[size];
    for(int i=0;i<size;i++)
    {
        cin>>resis[i];
    }
    for(int j=0;j<size;j++)
    {
        tresist=tresist+resis[j];
    }
    cout<<tresist<<" ohms";
}