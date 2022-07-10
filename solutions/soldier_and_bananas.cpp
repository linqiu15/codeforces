#include <bits/stdc++.h>
using namespace std;

int main(void){
  int k,n,w;
  cin>>k>>n>>w;
  int pay=0;
  for(;w>0;w--){
    pay+=k*w;
  }
  cout<<((n>=pay)?0:(pay-n));
  return 0;
}

