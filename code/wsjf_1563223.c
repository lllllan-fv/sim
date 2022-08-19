// Submission ID: 1563223
// Date: 2022-08-01 08:40:07
// Username: wsjf
// Realname: 王书家福
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
#define ll long long
using namespace std;
inline int read()
{
	int x=0,f=1;
	char c=getchar();
	while(c>'9' || c<'0')
		{
			if(c=='-')
				f=-1;
			c=getchar();
		}
	while(c>='0' && c<='9')
		{
			x=(x<<1)+(x<<3)+(c^48);
			c=getchar();
		}
	return x*f; 
 } 
signed main()
{
	register int n,a[1001],b[1001];
	ll ans=0;
	n=read();
	for(register int i=1;i<=n;++i)
		a[i]=read();
	sort(a+1,a+1+n);
	for(register int i=1;i<=n;++i)
		b[i]=read();
	sort(b+1,b+1+n);
	for(register int i=1;i<=n;++i)
		ans+=abs(a[i]-b[i]);
	cout<<ans;
	return 0;
 } 
//15827422790 
/*
2 
1 3
2 23481
1+23478
1+23480 
*/