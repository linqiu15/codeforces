#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,p,q;
  cin>>n;
  int res=0;
  for(;n>0;n--){
    cin>>p>>q;
    res+=int(q-p-2>=0);
  }
  cout<<res;
  return 0;
}

