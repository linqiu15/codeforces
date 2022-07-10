#include <bits/stdc++.h>
using namespace std;

bool isdistinct(int n){
  int arr[10]={0};
  while(n){
    if(arr[n%10]==0){
      arr[n%10]++;
      n/=10;
    }else{
      return false;
    }
  }
  return true;
}

int main(void){
  int start;
  cin>>start;
  int end=start+1;
  while(!isdistinct(end)){
    end++;
  }
  cout<<end<<endl;
  return 0;
}

