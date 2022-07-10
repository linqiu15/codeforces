#include <bits/stdc++.h>
using namespace std;

void move(char* arr,int sizes){
  for(int i=0;i<sizes;){
    if((i+1<sizes)&&*(arr+i)=='B'&&*(arr+i+1)=='G'){
      *(arr+i+1)='B';
      *(arr+i)='G';
      i+=2;
    }else{
      i++;
    }
  }
}

int main(void){
  int n,t;
  cin>>n>>t;
  char arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(;t>0;t--){
    move(arr,n);
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  return 0;
}

