#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size of array";
    cin>>size;
    int number[size];
    int sum=0;
    int count=0;
    int  avg;
    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter num";
        cin>>number[size];
        sum=sum+number[size];
        count++;
    }
    avg=sum/count;
    cout<<"sum is"<<sum<<endl;
    cout<<"average is"<<avg<<endl;
}