// Submission ID: 1568696
// Date: 2022-08-01 16:54:16
// Username: gtr20081010
// Realname: 管佟瑞
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int cnt;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
		cnt+=abs(a[i]-b[i]);
	cout<<cnt;
    return 0;
}