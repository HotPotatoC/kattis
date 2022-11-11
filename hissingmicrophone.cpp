#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s == "hiss")
    {
        cout << s << '\n';
        return 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 's' && s[i + 1] == 's')
        {
            cout << "hiss" << '\n';
            return 0;
        }
    }

    cout << "no hiss" << '\n';
    return 0;
}