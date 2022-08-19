// Submission ID: 1563165
// Date: 2022-08-01 08:33:24
// Username: www
// Realname: 王浩宇
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		cnt+=abs(a[i]-b[i]);
	}
	printf("%d",cnt);
}