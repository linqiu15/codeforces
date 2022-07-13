#include <bits/stdc++.h>
using namespace std;

int main(void) {
  long long int n;
  cin >> n;
  long long int a[5] = {0};
  int b[5] = {1, 5, 10, 20, 100};
  for (int i = 4; i >= 0; i--) {
    a[i] = n / b[i];
    n %= b[i];
  }
  long long int count = 0;
  for (int i = 0; i < 5; i++) {
    count += a[i];
  }
  cout << count << endl;
  return 0;
}

