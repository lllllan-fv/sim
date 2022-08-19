// Submission ID: 1563236
// Date: 2022-08-01 08:42:02
// Username: louzhichen
// Realname: 楼智宸
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[10000],b[10000],s;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int j=1;j<=n;j++)
	{
		cin>>b[j];
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
	{
		s+=abs(a[i]-b[i]);
	}
	cout<<s<<endl;
	return 0;
}