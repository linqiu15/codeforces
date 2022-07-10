#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(void){
  int n,cur;
  cin>>n;
  int arr[n];
  fill_n(arr,n,1);

  int num;
  for(int i=0;i<2;i++){
    //iterating twice
    cin>>num;
    for(;num>0;num--){
      cin>>cur;
      arr[cur-1]=0;
    }
  }

  for(int i=0;i<n;i++){
    if(arr[i]==1){
      cout<<"Oh, my keyboard!"<<endl;
      return 0;
    }
  }
  cout<<"I become the guy."<<endl;
  return 0;
}

