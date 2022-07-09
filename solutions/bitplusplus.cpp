#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
  int n;cin>>n;
  int res=0;
  string str;
  for(int i=0;i<n;i++){
    cin>>str;
/* char tmp=(str[0]=='X')?str[1]:str[0]; */
/* res+=(tmp=='+')?1:-1; */
    // the second char must be either '+' or '-'
    res+=(str[1]=='+')?1:-1;
  }
  cout<<res;
  return 0;
}

