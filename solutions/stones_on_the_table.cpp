#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin>>n;
  int res=0,tmp=0;
  char left,right;
  cin>>left;
  right=left;
  //cin will iterate once more!
  while((right=getchar())!=EOF){
    if(right==left){
      tmp++;
    }else{
      res+=tmp;
      left=right;
      tmp=0;
    }
  }
  res+=tmp;
  cout<<res;
  return 0;
}

