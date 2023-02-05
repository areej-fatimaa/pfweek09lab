#include<iostream>
using namespace std;
main()
{
    int size=0;
    cout<<"enter size";
    cin>>size;
    int array[size];
    int another;
    cout<<"enter another number";
    cin>>another;
    for(int i=0;i<size;i++)
    {
        cout<<"enter number";
        cin>>array[i];
    }
    for(int j=0;j<size;j++)
    {
        array[j]=array[j]*another;
        cout<<array[j];
    }
    
    
}