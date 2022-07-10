#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(void){
  long long int cur;
  set<long long int> s;
  while(cin>>cur){
    s.insert(cur); 
  }
  cout<<(4-s.size());
  return 0;
}

