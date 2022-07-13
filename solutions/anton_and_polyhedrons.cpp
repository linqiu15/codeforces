#include <bits/stdc++.h>

#include <string>
#define ll long long int
using namespace std;

int main(void) {
  // codes start here!
  string str;
  int n, count = 0;
  cin >> n;
  while (cin >> str) {
    if (str == "Tetrahedron") {
      count += 4;
    } else if (str == "Cube") {
      count += 6;
    } else if (str == "Octahedron") {
      count += 8;
    } else if (str == "Dodecahedron") {
      count += 12;
    } else {
      count += 20;
    }
  }
  cout << count << endl;
  return 0;
}

