#include <iostream>

using namespace std;

void validate(int n, int r)
{
    if (n == r)
    {
        cout << 0 << ' ';
    }
    if (n < r)
    {
        cout << (n - r) * -1 << ' ';
    }
    if (n > r)
    {
        cout << '-' << n - r << ' ';
    }
}

int main()
{
    int k, q, r, b, n, p;
    cin >> k >> q >> r >> b >> n >> p;

    validate(k, 1);
    validate(q, 1);
    validate(r, 2);
    validate(b, 2);
    validate(n, 2);
    validate(p, 8);

    return 0;
}