#include <iostream>

using namespace std;

int main()
{
    int n;
    int total = 0;

    while (cin >> n)
    {
        if (n < 0)
            total++;
    }

    cout << total << '\n';
    return 0;
}