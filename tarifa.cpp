#include <iostream>

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int p, y = 0;
        cin >> p;
        y = x - p;
        s += y;
    }

    s += x;

    cout << s << '\n';
    return 0;
}