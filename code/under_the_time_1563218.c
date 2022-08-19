// Submission ID: 1563218
// Date: 2022-08-01 08:39:45
// Username: under_the_time
// Realname: 洪宇帆
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) 
        cin>>a[i];
    for(int j=1;j<=n;j++)
        cin>>b[j];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    int ans=0;
    for(int i=1;i<=n;i++)
        ans+=abs(a[i]-b[i]);
    cout<<ans;
}