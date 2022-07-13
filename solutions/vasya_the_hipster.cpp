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

  int a, b;
  cin >> a >> b;
  int fashion = a >= b ? b : a;
  int same = a >= b ? (a - fashion) / 2 : (b - fashion) / 2;
  cout << fashion << " " << same << endl;
  return 0;
}

