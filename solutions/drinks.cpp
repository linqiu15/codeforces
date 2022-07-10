#include <bits/stdc++.h>
/* #include <iomanip> */
using namespace std;

int main(void){
  int n;cin>>n;
  int num=0,cur;
  double denum=100.0*n;
  for(;n>0;n--){
    cin>>cur;
    num+=cur;
  }
/* cout<<setprecision(10)<<num/denum*100.0; */
  cout<<num/denum*100.0;
  return 0;
}

