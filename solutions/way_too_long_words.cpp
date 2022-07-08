#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(void){
  int n;
  cin>>n;
  string str;
  for(int i=0;i<n;i++){
    cin>>str;
    if(str.size()<=10){
      cout<<str<<endl;
    }else{
      cout<<str[0]<<str.size()-2<<str.back()<<endl;
    }
  }
  return 0;
}

