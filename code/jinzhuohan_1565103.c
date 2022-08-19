// Submission ID: 1565103
// Date: 2022-08-01 11:37:25
// Username: jinzhuohan
// Realname: 金倬汉
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int num;
char ch;
int read()
{
	ch=getchar();
	num=0;
	while(ch<'0'||ch>'9')
	{
		ch=getchar();
	}
	while(ch>='0'&&ch<='9')
	{
		num=(num<<1)+(num<<3)+ch-'0';
		ch=getchar();
	}
	return num;
}
int n;
int a[1001],c[1001];
int main()
{
	n=read();
	for(int i=1;i<=n;++i)
	{
		a[i]=read();
	}
	for(int i=1;i<=n;++i)
	{
		c[i]=read();
	}
	sort(a+1,a+n+1);
	sort(c+1,c+n+1);
	int ans=0;
	for(int i=1;i<=n;++i)
	{
		ans+=abs(a[i]-c[i]);
	}
	printf("%d",ans);
	return 0;
}
/*

*/