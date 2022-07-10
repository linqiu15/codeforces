#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,h;
  cin>>n>>h;
  int cur=0,w=0;
  while(cin>>cur){
    w+=(cur>h?2:1);
  }
  cout<<w;
  return 0;
}

