#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int abc[3];
    char s[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> abc[i];
    }

    cin >> s;

    sort(begin(abc), end(abc));

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'A')
        {
            cout << abc[0] << ' ';
        }
        if (s[i] == 'B')
        {
            cout << abc[1] << ' ';
        }
        if (s[i] == 'C')
        {
            cout << abc[2] << ' ';
        }
    }

    return 0;
}