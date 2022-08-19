// Submission ID: 1563199
// Date: 2022-08-01 08:37:13
// Username: yudaorun
// Realname: xianyu001-余道润
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	cin>>b[i];
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	int sum=0;
	for(int i=1;i<=n;i++)
	sum+=abs(a[i]-b[i]);
	cout<<sum;
	return 0;
}