#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin>>n;

  int beforesum=0,aftersum=0;
  int beforearr[2][n],afterarr[2][n];
  for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
      cin>>beforearr[i][j];
      beforesum+=beforearr[i][j];
    }
  }
  for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
      cin>>afterarr[i][j];
      aftersum+=afterarr[i][j];
    }
  }
  if(beforesum!=aftersum){
    cout<<-1<<endl;
  }else{
    //find the minimal steps


  }
  return 0;
}

