#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,k;
  cin>>n>>k;
  for(;k>0;k--){
    if(n%10==0){
      n/=10;
    }else{
      n--;
    }
  }
  cout<<n;
  return 0;
}

