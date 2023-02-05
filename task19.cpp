#include<iostream>
using namespace std;
main()
{
    int size=0;
    cout<<"enter size";
    cin>>size;
    int array[size];
    int smallest=0;
    for(int i=0;i<size;i++)
    {
        cout<<"enter number";
        cin>>array[i];
    }
    smallest=array[0];
    for(int j=1;j<size;j++)
    {
        if(smallest>array[j])
        {
            smallest=array[j];
        }
    }
    cout<<"smallest number is:"<<smallest;

}