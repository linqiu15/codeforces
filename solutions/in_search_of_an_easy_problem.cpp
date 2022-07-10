#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,pos;
  cin>>n;
  for(;n>0;n--){
    cin>>pos;
    if(pos==1){
      cout<<"HARD"<<endl;
      return 0;
    }
  }
  cout<<"EASY"<<endl;
  return 0;
}

