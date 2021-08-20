#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    (n % 2 != 0)
        ? cout << "Alice" << '\n'
        : cout << "Bob" << '\n';
    return 0;
}