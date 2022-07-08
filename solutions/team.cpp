#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin>>n;
  int count=0;
  int a,b,c;
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    if((a+b+c)>=2){
      count++;
    }
  }

  cout<<count<<endl;
  return 0;
}

