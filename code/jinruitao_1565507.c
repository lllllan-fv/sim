// Submission ID: 1565507
// Date: 2022-08-01 12:03:56
// Username: jinruitao
// Realname: 金瑞涛
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1010],b[1010],n,ans=0;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
		ans+=abs(b[i]-a[i]);
	cout<<ans;
}