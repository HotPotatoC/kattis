#include <iostream>

using namespace std;

int main()
{
    int n, d;
    while (cin >> n >> d)
    {
        if (n == 0 && d == 0)
        {
            return 0;
        }

        int r = n % d;

        cout << n / d << " " << r << " / " << d << '\n';
    }

    return 0;
}