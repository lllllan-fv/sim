// Submission ID: 1563232
// Date: 2022-08-01 08:41:29
// Username: zhuangshanghua
// Realname: 庄尚华
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	for(int i=1;i<=n;i++)
	  cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
	  s+=abs(a[i]-b[i]);
	cout<<s;
	return 0;
}