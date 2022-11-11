#include <iostream>
#include <vector>

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n < 1)
        {
            break;
        }

        vector<string> vs;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            vs.push_back(s);
        }

        for (int i = 0; i < vs.size(); i++)
        {
            for (int j = 0; j < vs.size(); j++)
            {
                if (j + 1 != vs.size())
                {
                    if (vs[j][0] >= vs[j + 1][0])
                    {
                        swap(vs[j], vs[j + 1]);
                    }

                    if (vs[j][0] == vs[j + 1][0] && vs[j][1] >= vs[j + 1][1])
                    {
                        swap(vs[j + 1], vs[j]);
                    }
                }
            }
        }

        for (int i = 0; i < vs.size(); i++)
        {
            cout << vs[i] << '\n';
        }
        cout << '\n';
    }

    return 0;
}