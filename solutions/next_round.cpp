#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,k;
  cin>>n>>k;
  int score[n];
  for(int i=0;i<n;i++){
    cin>>score[i];
  }
  int count=0;
  for(int i=0;i<n;i++){
    if(score[i]>0&&score[i]>=score[k-1]){
      count++;
    }else{
      break;
    }
  }
  cout<<count<<endl;
  return 0;
}

