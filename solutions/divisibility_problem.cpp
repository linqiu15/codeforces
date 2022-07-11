#include <bits/stdc++.h>
using namespace std;
int solve(int a,int b){
/* //low efficiency */
/* int res=0; */
/* while(a%b!=0){ */
/* a++; */
/* res++; */
/* } */
/* return res; */
  return a%b==0?0:(b-(a%b));
}

int main(void){
  int t;cin>>t;
  int a,b;
  while(t){
    cin>>a>>b;
/* cout<<solve(a,b)<<endl; */
    cout<<(a%b==0?0:(b-(a%b)))<<endl;
    t--;
  }
  return 0;
}

