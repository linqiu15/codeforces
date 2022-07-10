#include <bits/stdc++.h>
using namespace std;

int main(void){
  int k,l,m,n,d;
  cin>>k>>l>>m>>n>>d;
  int count=0;
  for(int i=1;i<=d;i++){
    count+=((i%k==0)||(i%l==0)||(i%m==0)||(i%n==0));
  }
  cout<<count<<endl;
  return 0;
}

