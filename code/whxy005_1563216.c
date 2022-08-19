// Submission ID: 1563216
// Date: 2022-08-01 08:39:13
// Username: whxy005
// Realname: 宋何炜
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int n,a[N],b[N],vis[N],ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++) scanf("%d",&b[i]);
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)
    {
        ans+=abs(a[i]-b[i]);
        /*
        int flag=upper_bound(b+1,b+n+1,a[i])-b;
        flag-=1;
        while(vis[flag]!=0&&flag>1)
        {
            flag--;
        }
        vis[flag]=1;
        ans+=abs(a[i]-b[flag]);
        */
    }
    printf("%d",ans);
    return 0;
}