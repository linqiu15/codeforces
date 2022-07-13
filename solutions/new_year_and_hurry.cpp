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

  int n, k;
  cin >> n >> k;
  int res = 0;
  while (5 * res * (res + 1) / 2 + k <= 4 * 60) {
    res++;
  }
  res = (5 * res * (res + 1) / 2 + k == 4 * 60) ? res : res - 1;
  cout << (res > n ? n : res) << endl;
  return 0;
}

