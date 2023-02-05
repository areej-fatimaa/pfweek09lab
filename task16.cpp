#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"enter size";
    cin>>size;
    int number[size];
    int num;
     cout<<"enter num";
    cin>>num;
    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter numbers";
        cin>>number[idx];
        if(num==number[idx])
        {
            cout<<"already entered";
        }
    }
}
   
   