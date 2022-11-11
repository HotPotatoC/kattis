#include <bits/stdc++.h>
using namespace std;

bool find_solution(int ans, int op1, int op2) {
  switch (op1) {
    case 0:
      if (op2 == 0) {
        if (4 * 4 * 4 * 4 == ans) {
          cout << "4 * 4 * 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 * 4 + 4 == ans) {
          cout << "4 * 4 * 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 * 4 - 4 == ans) {
          cout << "4 * 4 * 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 * 4 / 4 == ans) {
          cout << "4 * 4 * 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 1) {
        if (4 * 4 + 4 * 4 == ans) {
          cout << "4 * 4 + 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 + 4 + 4 == ans) {
          cout << "4 * 4 + 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 + 4 - 4 == ans) {
          cout << "4 * 4 + 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 + 4 / 4 == ans) {
          cout << "4 * 4 + 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 2) {
        if (4 * 4 - 4 * 4 == ans) {
          cout << "4 * 4 - 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 - 4 + 4 == ans) {
          cout << "4 * 4 - 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 - 4 - 4 == ans) {
          cout << "4 * 4 - 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 - 4 / 4 == ans) {
          cout << "4 * 4 - 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 3) {
        if (4 * 4 / 4 * 4 == ans) {
          cout << "4 * 4 / 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 / 4 + 4 == ans) {
          cout << "4 * 4 / 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 / 4 - 4 == ans) {
          cout << "4 * 4 / 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 * 4 / 4 / 4 == ans) {
          cout << "4 * 4 / 4 / 4 = " << ans << '\n';
          return true;
        }
      }
      break;
    case 1:
      if (op2 == 0) {
        if (4 + 4 * 4 * 4 == ans) {
          cout << "4 + 4 * 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 * 4 + 4 == ans) {
          cout << "4 + 4 * 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 * 4 - 4 == ans) {
          cout << "4 + 4 * 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 * 4 / 4 == ans) {
          cout << "4 + 4 * 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 1) {
        if (4 + 4 + 4 * 4 == ans) {
          cout << "4 + 4 + 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 + 4 + 4 == ans) {
          cout << "4 + 4 + 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 + 4 - 4 == ans) {
          cout << "4 + 4 + 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 + 4 / 4 == ans) {
          cout << "4 + 4 + 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 2) {
        if (4 + 4 - 4 * 4 == ans) {
          cout << "4 + 4 - 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 - 4 + 4 == ans) {
          cout << "4 + 4 - 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 - 4 - 4 == ans) {
          cout << "4 + 4 - 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 - 4 / 4 == ans) {
          cout << "4 + 4 - 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 3) {
        if (4 + 4 / 4 * 4 == ans) {
          cout << "4 + 4 / 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 / 4 + 4 == ans) {
          cout << "4 + 4 / 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 / 4 - 4 == ans) {
          cout << "4 + 4 / 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 + 4 / 4 / 4 == ans) {
          cout << "4 + 4 / 4 / 4 = " << ans << '\n';
          return true;
        }
      }
      break;
    case 2:
      if (op2 == 0) {
        if (4 - 4 * 4 * 4 == ans) {
          cout << "4 - 4 * 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 * 4 + 4 == ans) {
          cout << "4 - 4 * 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 * 4 - 4 == ans) {
          cout << "4 - 4 * 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 * 4 / 4 == ans) {
          cout << "4 - 4 * 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 1) {
        if (4 - 4 + 4 * 4 == ans) {
          cout << "4 - 4 + 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 + 4 + 4 == ans) {
          cout << "4 - 4 + 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 + 4 - 4 == ans) {
          cout << "4 - 4 + 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 + 4 / 4 == ans) {
          cout << "4 - 4 + 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 2) {
        if (4 - 4 - 4 * 4 == ans) {
          cout << "4 - 4 - 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 - 4 + 4 == ans) {
          cout << "4 - 4 - 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 - 4 - 4 == ans) {
          cout << "4 - 4 - 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 - 4 / 4 == ans) {
          cout << "4 - 4 - 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 3) {
        if (4 - 4 / 4 * 4 == ans) {
          cout << "4 - 4 / 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 / 4 + 4 == ans) {
          cout << "4 - 4 / 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 / 4 - 4 == ans) {
          cout << "4 - 4 / 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 - 4 / 4 / 4 == ans) {
          cout << "4 - 4 / 4 / 4 = " << ans << '\n';
          return true;
        }
      }
      break;
    case 3:
      if (op2 == 0) {
        if (4 / 4 * 4 * 4 == ans) {
          cout << "4 / 4 * 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 * 4 + 4 == ans) {
          cout << "4 / 4 * 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 * 4 - 4 == ans) {
          cout << "4 / 4 * 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 * 4 / 4 == ans) {
          cout << "4 / 4 * 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 1) {
        if (4 / 4 + 4 * 4 == ans) {
          cout << "4 / 4 + 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 + 4 + 4 == ans) {
          cout << "4 / 4 + 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 + 4 - 4 == ans) {
          cout << "4 / 4 + 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 + 4 / 4 == ans) {
          cout << "4 / 4 + 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 2) {
        if (4 / 4 - 4 * 4 == ans) {
          cout << "4 / 4 - 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 - 4 + 4 == ans) {
          cout << "4 / 4 - 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 - 4 - 4 == ans) {
          cout << "4 / 4 - 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 - 4 / 4 == ans) {
          cout << "4 / 4 - 4 / 4 = " << ans << '\n';
          return true;
        }
      } else if (op2 == 3) {
        if (4 / 4 / 4 * 4 == ans) {
          cout << "4 / 4 / 4 * 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 / 4 + 4 == ans) {
          cout << "4 / 4 / 4 + 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 / 4 - 4 == ans) {
          cout << "4 / 4 / 4 - 4 = " << ans << '\n';
          return true;
        } else if (4 / 4 / 4 / 4 == ans) {
          cout << "4 / 4 / 4 / 4 = " << ans << '\n';
          return true;
        }
      }
      break;
  }

  return false;
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    string ops = "*+-/";

    int n;
    cin >> n;

    bool ans_exists = false;
    for (int op1 = 0; op1 < 4; op1++) {
      for (int op2 = 0; op2 < 4; op2++) {
        // O(1) LMAO
        ans_exists = find_solution(n, op1, op2);
        if (ans_exists) break;
      }

      if (ans_exists) break;
    }
    if (!ans_exists) cout << "no solution" << '\n';
  }
  return 0;
}