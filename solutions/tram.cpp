#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,a,b;
  cin>>n;
  int cap=0,cur=0;
  for(;n>0;n--){
    cin>>a>>b;
    cur+=(b-a);
    if(cur>cap){
      cap=cur;
    }
  }
  cout<<cap;
  return 0;
}

