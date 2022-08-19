// Submission ID: 1565728
// Date: 2022-08-01 13:00:32
// Username: wycz2125
// Realname: 周子栋
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int ans=0,n,a[1007],b[1007];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++) ans+=abs(a[i]-b[i]);
    cout<<ans;
    return 0;
}