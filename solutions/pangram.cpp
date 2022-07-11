#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n;
  cin >> n;
  char cur;
  int arr[26] = {0};
  while (cin >> cur) {
    int id = (cur >= 'a' ? cur - 'a' : cur - 'A');
    arr[id] = 1;
  }
  for (int i = 0; i < 26; i++) {
    if (arr[i] == 0) {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}

