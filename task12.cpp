#include <iostream>
using namespace std;
main()
{
    char d[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string str;
    cout << "enter string";
    cin >> str;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (str[i] == d[j])
            {
                j++;
                cout << d[j];
            }
        }
    }
}