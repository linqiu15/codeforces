#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;cin>>n;
  bool ishate=true;
  while(n>1){
    cout<<(ishate?"I hate that ":"I love that ");
    ishate=!ishate;
    n--;
  }
  cout<<(ishate?"I hate it":"I love it");
  return 0;
}

