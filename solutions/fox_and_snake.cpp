#include <bits/stdc++.h>

#include <map>
#include <set>
#include <string>

#define ll long long int
using namespace std;
void draw(int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0) {
        cout << "#";
      } else if ((i - 1) % 4 == 0 && j == m - 1) {
        cout << "#";
      } else if ((i - 1) % 4 == 2 && j == 0) {
        cout << "#";
      } else {
        cout << ".";
      }
    }
    cout << endl;
  }
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // n is odd
  int n, m;
  cin >> n >> m;
  draw(n, m);

  return 0;
}

