#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
  string first,second;
  cin>>first>>second;
  int f,s,res=0;
  for(int i=0;(unsigned)i<first.size();i++){
    f=(first[i]>='a')?(first[i]-'a'):(first[i]-'A');
    s=(second[i]>='a')?(second[i]-'a'):(second[i]-'A');
    if(f!=s){
      res=(f<s)?-1:1;
      break;
    }
  }
  cout<<res;
  return 0;
}

