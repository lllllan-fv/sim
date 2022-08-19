// Submission ID: 1571443
// Date: 2022-08-02 09:25:04
// Username: chenyuehao
// Realname: 陈悦昊
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[10001],b[10001],sum;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp);
	for(int i=1;i<=n;i++)
		sum+=abs(a[i]-b[i]);
	cout<<sum;
	return 0;
}