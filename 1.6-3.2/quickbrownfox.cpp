#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    string ma;
    vector<string> vs;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        transform(s.begin(), s.end(), s.begin(),
                  [](unsigned char c)
                  { return tolower(c); });

        for (int j = 97; j < 123; j++)
        {
            if (s.find(j) > s.size())
            {
                ma.push_back(j);
            }
        }

        if (ma.size() > 0)
        {
            sort(ma.begin(), ma.end());
            cout << "missing " << ma << '\n';
            ma.clear();
        }
        else
        {
            cout << "pangram" << '\n';
        }
    }

    return 0;
}