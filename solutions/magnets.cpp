#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,res=0;
  cin>>n;
  int last,cur;
  cin>>last;
  while(cin>>cur){
    if(last!=cur){
      res++;
      last=cur;
    }
  }
  cout<<(res+1);
  return 0;
}

