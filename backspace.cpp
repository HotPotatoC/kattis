#include <bits/stdc++.h>
using namespace std;

int main() {
  string input;
  cin >> input;

  vector<char> v;
  for (char c : input) {
    if (c == '<') {
      v.pop_back();
    } else {
      v.push_back(c);
    }
  }

  for (char c : v) {
    cout << c;
  }

  cout << '\n';

  return 0;
}