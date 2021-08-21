#include <iostream>

using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    m -= 45;
    if (m < 0)
    {
        h--;
        if (h < 0)
        {
            h += 24;
        }
        m += 60;
    }

    cout << h << ' ' << m << '\n';
    return 0;
}