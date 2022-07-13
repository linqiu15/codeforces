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

  int n;
  cin >> n;
  int count = 0, police = 0;
  int event;
  while (cin >> event) {
    if (event > 0) {
      police += event;
    } else {
      if (police == 0) {
        count++;
      } else {
        police--;
      }
    }
  }
  cout << count << endl;
  return 0;
}

