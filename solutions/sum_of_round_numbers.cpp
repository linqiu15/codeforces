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
  int t;
  cin >> t;
  int n;
  while (cin >> n) {
    int k = 0, tmp = n;
    while (tmp) {
      if (tmp % 10 != 0) {
        k++;
      }
      tmp /= 10;
    }
    cout << k << endl;
    int d, times = 1;
    while (n) {
      d = n % 10;
      if (d) {
        cout << d * times << " ";
      }
      n /= 10;
      times *= 10;
    }
    cout << endl;
  }
  return 0;
}

