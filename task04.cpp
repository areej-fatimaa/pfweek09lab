#include<iostream>
using namespace std;
main()
{
   int number[5];
   for(int count=0;count<5;count++)
   {
    cout<<"enter number";
    cin>>number[count];
   }
   cout<<"first element in array:"<<number[0]<<endl;
   cout<<"last element in array:"<<number[4];
}

