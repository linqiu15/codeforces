#include <bits/stdc++.h>
using namespace std;

int main(void){
  int l,b,res=0;
  cin>>l>>b;
  while(l<=b){
    l*=3;
    b*=2;
    res++;
  }
  cout<<res;
  return 0;
}

