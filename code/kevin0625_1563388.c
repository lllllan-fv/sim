// Submission ID: 1563388
// Date: 2022-08-01 09:09:25
// Username: kevin0625
// Realname: 王泽锴
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1010],b[1010],ans;
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
		ans+=max(a[i],b[i])-min(a[i],b[i]);
	cout<<ans;
	return 0;
}