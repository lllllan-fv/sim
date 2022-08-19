// Submission ID: 1563202
// Date: 2022-08-01 08:37:47
// Username: wangyuzhou
// Realname: 王钰周
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],s;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)s+=abs(a[i]-b[i]);
	cout<<s;
	return 0; 
}