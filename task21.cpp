#include<iostream>
using namespace std;
main()
{
    int array1[2];
    int size=0;
    cout<<"enter size of array2:";
    cin>>size;
    int array2[size];
    for(int j=0;j<2;j++)
    {
        cout<<"array1:";
        cin>>array1[j];
    }
    for(int i=0;i<size;i++)
    {
        cout<<"array2";
        cin>>array2[i];
    }
    for(int k=0;k<2;k++)
    {
        cout<<array1[k]<<",";
        if(k==1)
        {
            break;
        }
        for(int n=0;n<size;n++)
        {
          cout<<array2[n]<<",";
        }
    }

}