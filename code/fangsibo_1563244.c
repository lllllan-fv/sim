// Submission ID: 1563244
// Date: 2022-08-01 08:44:25
// Username: fangsibo
// Realname: 方思博
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],ans;
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
