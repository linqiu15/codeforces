#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
  string first,second;
  cin>>first>>second;
  for(unsigned int i=0;i<first.size();i++){
    cout<<(first[i]!=second[i]?1:0);
  }
  return 0;
}

