#include <bits/stdc++.h>

#include <map>
#include <set>
#include <string>

#define ll long long int
#define endl "\n"
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int k, r;
  cin >> k >> r;

  int res = 1;
  for (; res <= 10; res++) {
    if (res * k % 10 == 0 || (res * k - r) % 10 == 0) {
      cout << res << endl;
      break;
    }
  }

  return 0;
}

