#include <iostream>

using namespace std;

int main()
{
    long int n1, n2;
    while (cin >> n1 >> n2)
    {
        if (n1 > n2)
        {
            cout << n1 - n2 << '\n';
        }
        else
        {
            cout << n2 - n1 << '\n';
        }
    }

    return 0;
}