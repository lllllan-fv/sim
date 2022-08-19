// Submission ID: 1563193
// Date: 2022-08-01 08:36:41
// Username: whxy028
// Realname: 余振越
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int n,a[N],b[N];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&b[i]);
    }
    sort(a+1,a+n+1);sort(b+1,b+n+1);
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=abs(a[i]-b[i]);
    }
    cout<<ans;
    return 0;
}