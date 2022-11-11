#include <bits/stdc++.h>
using namespace std;

class teque {
 private:
  deque<int> l;

 public:
  teque() = default;

  void push_back(int x) { this->l.push_back(x); }
  void push_front(int x) { this->l.insert(this->l.begin(), x); }
  void push_middle(int x) {
    this->l.insert(this->l.begin() + (this->l.size() + 1) / 2, x);
  }
  int get(int idx) { return this->l[idx]; }
};

int main() {
  teque tq;
  int n;
  cin >> n;
  while (n--) {
    string command;
    int arg;

    cin >> command >> arg;

    if (command == "push_back") {
      tq.push_back(arg);
    } else if (command == "push_front") {
      tq.push_front(arg);
    } else if (command == "push_middle") {
      tq.push_middle(arg);
    } else if (command == "get") {
      cout << tq.get(arg) << '\n';
    }
  }
  return 0;
}