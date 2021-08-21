#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int n;
        vector<int> vg;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            vg.push_back(g);
        }

        double m = 0;
        for (int i = 0; i < vg.size(); i++)
        {
            m += vg[i];
        }

        m /= n;

        int naa = 0;
        for (int i = 0; i < vg.size(); i++)
        {
            if (vg[i] > m)
            {
                naa++;
            }
        }

        double p = (double)100 / n;
        double paa = p * naa;

        cout << fixed << setprecision(3) << paa << "%\n";
    }

    return 0;
}