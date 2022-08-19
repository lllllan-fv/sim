// Submission ID: 1563237
// Date: 2022-08-01 08:42:06
// Username: yhyz2021029
// Realname: 孔竹林
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int main()
{
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)
		scanf("%d",&b[i]);
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
		ans+=abs(a[i]-b[i]);
	cout<<ans;
    return 0;
}
