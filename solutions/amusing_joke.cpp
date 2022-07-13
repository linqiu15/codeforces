#include <bits/stdc++.h>

#include <string>
#define ll long long int
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string a, b, c;
  cin >> a >> b >> c;
  // part a
  for (unsigned int i = 0; i < a.size(); i++) {
    unsigned int j;
    for (j = 0; j < c.size(); j++) {
      if (a[i] == c[j]) {
        c[j] = '-';
        break;
      }
    }
    // if there's letter missing
    if (j == c.size()) {
      cout << "NO" << endl;
      return 0;
    }
  }
  // part b
  for (unsigned int i = 0; i < b.size(); i++) {
    unsigned int j;
    for (j = 0; j < c.size(); j++) {
      if (b[i] == c[j]) {
        c[j] = '-';
        break;
      }
    }
    if (j == c.size()) {
      cout << "NO" << endl;
      return 0;
    }
  }
  for (unsigned int i = 0; i < c.size(); i++) {
    if (c[i] != '-') {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}

