#include <bits/stdc++.h>

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
    int a[n];
    int numofeven = 0, numofodd = 0, numoferror = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 0) {
        numofeven++;
      } else {
        numofodd++;
      }
      numoferror += (a[i] % 2 == i % 2 ? 0 : 1);
    }
    if (numofeven != numofodd + n % 2) {
      cout << -1 << endl;
      continue;
    }
    cout << ceil(numoferror / 2) << endl;
  }
  return 0;
}

