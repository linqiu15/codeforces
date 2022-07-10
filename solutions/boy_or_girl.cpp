#include <bits/stdc++.h>
using namespace std;

int main(void){
  int arr[26]={0};
  char cur;
  while(cin){
    cin>>cur;
    arr[cur-'a']++;
  }
  int count=0;
  for(int i=0;i<sizeof(arr);i++){
    count+=(arr[i]!=0);
  }
  cout<<((count%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
  return 0;
}

