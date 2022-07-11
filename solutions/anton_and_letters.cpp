#include <bits/stdc++.h>

#include <set>
using namespace std;

int main(void) {
  set<char> s;
  char cur;
  while (cin >> cur) {
    if (cur >= 'a' && cur <= 'z') {
      s.insert(cur);
    }
  }
  cout << s.size() << endl;
  return 0;
}

