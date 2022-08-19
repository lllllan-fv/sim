// Submission ID: 1563983
// Date: 2022-08-01 10:09:57
// Username: gaoyi22
// Realname: 高忆
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,ans;
int g[1005],m[1005];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>g[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
	}
	sort(g+1,g+1+n);
	sort(m+1,m+1+n);
	for(int i=1;i<=n;i++)
	{
		if(g[i]<m[i])
		{
			ans+=m[i]-g[i];
		}
		else
		{
			ans+=g[i]-m[i];
		}
	}
	cout<<ans;
	return 0;
}