#include <bits/stdc++.h>
using namespace std;
void solve(int n) {
  if (n % 4 != 0) {
    cout << "NO" << endl;
  } else {
    int half = n / 2;
    cout << "YES" << endl;
    for (int i = 1; i <= half; i++) {
      cout << 2 * i << " ";
    }
    for (int i = 1; i < half; i++) {
      cout << 2 * i - 1 << " ";
    }
    cout << (n + half - 1) << endl;
  }
}
int main(void) {
  int t;
  cin >> t;
  int n;
  while (t) {
    cin >> n;
    solve(n);
    t--;
  }
  return 0;
}

