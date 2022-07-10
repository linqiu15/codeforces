#include <bits/stdc++.h>
using namespace std;

int main(void){
  long long int n;cin>>n;
/* long long int res=0; */
/* //time killing */
/* while(n){ */
/* res+=(n%2==0?n:-n); */
/* n--; */
/* } */
/* cout<<res; */
  cout<<(n%2==0?n/2:(n/2-n));
  return 0;
}

