// Submission ID: 1563186
// Date: 2022-08-01 08:35:48
// Username: xjz090917
// Realname: Anorymous_徐境泽
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h> 
using namespace std;
int a[1010];//公牛 
int b[1010];//母牛 
int sum;//身高差 
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	for(int i=1;i<=n;i++)
	{
		sum+=max(a[i]-b[i],b[i]-a[i]);
	}	
	cout<<sum; 
}