#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;cin>>n;
  int high=0,low=101; //the initial low value must be bigger than the upper bound
  int highid=0,lowid=0;
  int cur;
  int i=0;
  while(cin>>cur){
    if(cur>high){
      high=cur;
      highid=i;
    }
    if(cur<=low){
      low=cur;
      lowid=i;
    }
    i++;
  }
  if(highid<=lowid){
    cout<<(highid+n-1-lowid);
  }else{
    //in such a case, the step will reduce once since the low will be moved one step when moving the higher one.
    cout<<(highid+n-1-1-lowid);
  }
  return 0;
}

