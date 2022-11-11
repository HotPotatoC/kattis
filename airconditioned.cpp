#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> x, pair<int, int> y) {
  if (x.second == y.second) {
    return x.first < y.first;
  }
  return x.second < y.second;
}

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> intervals;
  while (n--) {
    int low, up;
    cin >> low >> up;
    intervals.push_back(make_pair(low, up));
  }

  sort(intervals.begin(), intervals.end(), compare);

  int ans = 1;
  int endpoint = intervals[0].second;
  for (int i = 1; i < intervals.size(); i++) {
    if (intervals[i].first > endpoint) {
      endpoint = intervals[i].second;
      ans++;
    }
  }

  cout << ans << '\n';

  return 0;
}