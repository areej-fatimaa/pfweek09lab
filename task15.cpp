#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size of array";
    cin>>size;
    int number[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter num";
        cin>>number[i];
    }
    for(int idx=size-1;idx>=0;idx--)
    {
        cout<<number[idx]<<endl;
    }
    
    

}