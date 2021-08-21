#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == -1)
            break;

        int d = 0;
        int s, t = 0, tb;
        for (int i = 0; i < n; i++)
        {
            tb = t;
            cin >> s >> t;
            d += s * (t - tb);
        }

        cout << d << " miles" << '\n';
    }
    return 0;
}