#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
  string str;
  cin>>str;
  int n=str.size()/2+1;
  char tmp;
  //bubble sort
  for(int i=1;i<n;i++){
    for(int j=0;j<n-i;j++){
      if(str[2*j]>str[2*(j+1)]){
        tmp=str[2*j];
        str[2*j]=str[2*(j+1)];
        str[2*(j+1)]=tmp;
      }
    }
  }
  cout<<str;
  return 0;
}

