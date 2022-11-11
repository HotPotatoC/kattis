#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> wealth_map;
  wealth_map.reserve(n);

  int restart = 0;
  while (q--) {
    string event;
    cin >> event;

    if (event == "SET") {
      int i, x;
      cin >> i >> x;
      wealth_map[i - 1] = x;
    } else if (event == "RESTART") {
      int x;
      cin >> x;
      restart = x;
      wealth_map.clear();
    } else if (event == "PRINT") {
      int i;
      cin >> i;
      if (wealth_map[i - 1] == 0) {
        cout << restart << '\n';
      } else {
        cout << wealth_map[i - 1] << '\n';
      }
    }
  }

  return 0;
}