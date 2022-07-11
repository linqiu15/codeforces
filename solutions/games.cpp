#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  int colors[n][2];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> colors[i][j];
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {  // in fact, the judgement is unnecessary
        count += (colors[i][0] == colors[j][1] ? 1 : 0);
      }
    }
  }
  cout << count << endl;
  return 0;
}

