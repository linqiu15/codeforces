#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n,cur;
  cin>>n;
  int arr[n]={0};
  for(int i=0;i<n;i++){
    cin>>cur;
    arr[cur-1]=i+1;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}

