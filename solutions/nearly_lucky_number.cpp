#include <bits/stdc++.h>
using namespace std;

int main(void){
  char cur;
  int count=0;
/* while((cur=getchar())!=EOF){ */
  while(cin>>cur){
    if(cur=='4'||cur=='7'){
      count++;
    }
  }
/* cout<<"Count:"<<count<<endl; */
  bool flag=(count>0);
  while(count){
    int tmp;
    tmp=count%10;
    if(tmp==4||tmp==7){
      count/=10;
    }else{
      flag=false;
      break;
    }
  }


  if(flag){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}

