// Submission ID: 1565761
// Date: 2022-08-01 13:16:37
// Username: yuyong
// Realname: 于雍
// Contest ID: 4701
// Problem ID: 1329
//AC AC AC
#include <bits/stdc++.h>
using namespace std;

long long a[1001],b[1001];
long long n;

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    long long cnt;
    for(int i=1;i<=n;i++)
    {
        cnt+=abs(a[i]-b[i]);
    }
    cout<<cnt;
    return 0;
}
//AC AC AC