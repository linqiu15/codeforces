#include <bits/stdc++.h>

#include <map>
#include <set>
#include <string>

#define ll long long int
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, t;
  cin >> t;
  while (cin >> n) {
    cout << (n % 2 == 0 ? n / 2 - 1 : n / 2) << endl;
  };

  return 0;
}

