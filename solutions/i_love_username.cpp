#include <bits/stdc++.h>

#define ll long long int
#define endl "\n"
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int best = 0, worst = 0;
  cin >> best;
  worst = best;
  int cur, count = 0;
  while (cin >> cur) {
    if (cur > best) {
      count++;
      best = cur;
    } else if (cur < worst) {
      count++;
      worst = cur;
    }
  }
  cout << count << endl;
  return 0;
}

