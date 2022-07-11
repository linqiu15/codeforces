/* ideas: */
/* 1.insert the initial two arrays in non-decreasing order */
/* 2.sort the a[0:k-1] and b[n-k:n-1](2k in total) with axicillary arry c */
/* 3.sum the c[k:] and a[k:] */
#include <bits/stdc++.h>
using namespace std;

void insert_init(int arr[], int n) {
  int cur;
  cin >> cur;
  arr[0] = cur;
  int j;
  for (int i = 1; i < n; i++) {
    cin >> cur;
    j = i - 1;
    while (j >= 0 && arr[j] > cur) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = cur;
  }
}
void replace(int a[], int b[], int c[], int k, int n) {
  c[0] = a[0];
  int j, cur;
  // part a
  for (int i = 1; i < k; i++) {
    cur = a[i];
    j = i - 1;
    while (j >= 0 && c[j] > cur) {
      c[j + 1] = c[j];
      j = j - 1;
    }
    c[j + 1] = cur;
  }
  // part b
  for (int i = 0; i < k; i++) {
    cur = b[n - k + i];
    j = k - 1 + i;
    while (j >= 0 && c[j] > cur) {
      c[j + 1] = c[j];
      j--;
    }
    c[j + 1] = cur;
  }
}

int main(void) {
  int t;
  cin >> t;
  int n, k;
  while (t) {
    cin >> n >> k;
    int a[n] = {0};
    int b[n] = {0};
    int c[2 * k] = {0};

    // sort the two arrays
    insert_init(a, n);
    insert_init(b, n);

    // find the k lagest number in a[0:k-1] and b[n-1-k:n-1]
    replace(a, b, c, k, n);

    int count = 0;
    // adding last k numbers in c
    for (int l = 0; l < k; l++) {
      count += c[k + l];
    }
    // adding last numbers from k-th in a
    for (int l = k; l < n; l++) {
      count += a[l];
    }
    cout << count << endl;
    t--;
  }
  return 0;
}

