#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
  string str;
  cin>>str;
  unsigned int count=0;
  for(unsigned int i=0;i<str.size();i++){
    count+=int(str[i]>='a');
  }
  if(count*2>=str.size()){
    for(unsigned int i=0;i<str.size();i++){
      cout<<(str[i]>='a'?str[i]:char(str[i]+('a'-'A')));
    }
  }else{
    for(unsigned int i=0;i<str.size();i++){
      cout<<(str[i]>='a'?char(str[i]-('a'-'A')):str[i]);
    }
  }
  return 0;
}

