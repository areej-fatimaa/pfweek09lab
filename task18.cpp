#include<iostream>
using namespace std;
main()
{
    int size=0;
    cout<<"enter size";
    cin>>size;
    int array[size];
    int largest=0;
    for(int i=0;i<size;i++)
    {
        cout<<"enter number";
        cin>>array[i];
    }
    largest=array[0];
    for(int j=1;j<size;j++)
    {
        if(largest<array[j])
        {
            largest=array[j];
        }
    }
    cout<<"largest number is:"<<largest;

}