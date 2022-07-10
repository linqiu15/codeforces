#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
  string s,t;
  cin>>s>>t;
  bool flag=true;
  for(unsigned int i=0;i<s.size();i++){
    if(s[i]!=t[s.size()-i-1]){
      flag=false;
      break;
    }
  }
  cout<<(flag?"YES":"NO");
  return 0;
}

