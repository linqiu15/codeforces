#include <bits/stdc++.h>
using namespace std;

int main(void){
  int balance=0;
  int n;
  cin>>n;
  char cur;
  while(cin>>cur){
    balance+=((cur=='A')?1:-1);
  }
  if(balance>0){
    cout<<"Anton";
  }else if(balance==0){
    cout<<"Friendship";
  }else{
    cout<<"Danik";
  }
  return 0;
}

