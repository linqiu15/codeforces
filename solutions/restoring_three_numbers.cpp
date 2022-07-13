#include <bits/stdc++.h>

#define ll long long int
#define endl "\n"
using namespace std;

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr[4], maximum = 0;
  for (int i = 0; i < 4; i++) {
    cin >> arr[i];
    if (arr[i] > maximum) {
      maximum = arr[i];
    }
  }
  for (int i = 0; i < 4; i++) {
    if (arr[i] != maximum) {
      cout << maximum - arr[i] << " ";
    }
  }

  return 0;
}

