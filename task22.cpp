#include <iostream>
using namespace std;
main()
{
  int due;
  // bool istrue=false;
  cout << "enter due";
  cin >> due;
  int sum = 0;
 
  int change[4];
  for (int n = 0; n < 4; n++)
  {
    cout << "enter change you have:";
    cin >> change[n];
    
  }
  for (int j = 0; j < 4 ; j++)
  {
    if (j == 0)
      sum = sum + change[j] * 0.25;
    if (j == 1)
      sum = sum + change[j] * 0.10;
    if (j == 2)
      sum = sum + change[j] * 0.05;
    if (j == 3)
      sum = sum + change[j] * 0.01;
  }
  if (sum >= due)
  {
    cout << "enough money";
  }
  else
  {
    cout << "not  enough";
  }
}