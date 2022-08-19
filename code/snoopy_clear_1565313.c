// Submission ID: 1565313
// Date: 2022-08-01 11:52:07
// Username: snoopy_clear
// Realname: 李呱呱
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int main()
{
 	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	int ans=0;
	for(int i=1;i<=n;i++)
		ans+=abs(a[i]-b[i]);
	cout<<ans;
	return 0;
}
