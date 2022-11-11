#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int available_printers = 1;
  int printed_statues = 0;
  int ans = 0;

  while (printed_statues < n) {
    ans++;
    if ((n - printed_statues) > available_printers) {
      available_printers += available_printers;
    } else {
      printed_statues += available_printers;
    }
  }

  cout << ans << '\n';
  return 0;
}