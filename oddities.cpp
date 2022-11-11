#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " is ";
        (x[i] % 2 == 0) ? cout << "even\n"
                     : cout << "odd\n";
    }

    return 0;
}