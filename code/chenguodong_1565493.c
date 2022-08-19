// Submission ID: 1565493
// Date: 2022-08-01 12:02:23
// Username: chenguodong
// Realname: 陈国栋
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a[1005],b[1005];
  int n;
  long long ans=0;
  cin>>n;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++) cin>>b[i];
  sort(a+1,a+1+n);
  sort(b+1,b+1+n);
  for(int i=1;i<=n;i++){
      ans+=(max(a[i],b[i])-min(a[i],b[i]));
  }
  cout<<ans;
}
