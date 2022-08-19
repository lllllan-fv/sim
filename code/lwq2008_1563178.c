// Submission ID: 1563178
// Date: 2022-08-01 08:34:58
// Username: lwq2008
// Realname: 林薇琪
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int m[1773];
int f[1773];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",m+i);
	for(int i=1;i<=n;i++)
		scanf("%d",f+i);
	sort(m+1,m+n+1);
	sort(f+1,f+n+1);
	int ans=0;
	for(int i=1;i<=n;i++)
		ans+=abs(f[i]-m[i]);
	printf("%d",ans);
	return 0;
}