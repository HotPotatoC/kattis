#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> dict;

    string l;

    while (getline(cin, l) && l != "")
    {
        int s_idx = l.find(" ");
        string v = l.substr(0, s_idx);
        string k = l.substr(s_idx + 1, l.length() - 1);

        dict[k] = v;
    }

    string s;
    while (cin >> s)
    {
        if (dict.find(s) == dict.end())
            cout << "eh" << '\n';
        else
            cout << dict[s] << '\n';
    }

    return 0;
}