#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i = 1;
    int n;
    while (cin >> n)
    {
        int x[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        int *min = min_element(x, x + n);
        int *max = max_element(x, x + n);

        cout << "Case " << i << ": " << *min << ' ' << *max << ' ' << *max - *min;

        cout << '\n';
        i++;
    }

    return 0;
}