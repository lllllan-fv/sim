// Submission ID: 1563205
// Date: 2022-08-01 08:37:51
// Username: qb20130328
// Realname: 袁瑞擎
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1001],b[1001],s=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)
    {
    	if(a[i]>b[i]) s+=a[i]-b[i];
    	else s+=b[i]-a[i];
	}
	cout<<s;
    return 0;
}