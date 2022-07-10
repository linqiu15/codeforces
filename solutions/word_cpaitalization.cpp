#include <bits/stdc++.h>
using namespace std;

int main(void){
  char tmp;
  cin>>tmp;
  if(tmp>='a'){
    cout<<char(tmp-('a'-'A'));
  }else{
    cout<<tmp;
  }
  while(cin>>tmp){
    cout<<tmp;
  }
  return 0;
}

