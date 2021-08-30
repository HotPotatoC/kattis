#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int n;
    while (cin >> n)
    {
        int min = 1000000, max = -1000000;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (max < x)
                max = x;
            if (min > x)
                min = x;
        }

        cout << "Case " << i << ": " << min << ' ' << max << ' ' << max - min;

        cout << '\n';
        i++;
    }

    return 0;
}