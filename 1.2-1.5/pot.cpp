#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        int pown = s % 10;
        int p = s / 10;
        sum += pow(p, pown);
    }

    cout << sum << '\n';
    return 0;
}