// Submission ID: 1565999
// Date: 2022-08-01 13:50:14
// Username: cunning
// Realname: 盛若希
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,c;
int g[1001],m[1001];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&g[i]);
	for(int i=1;i<=n;i++) scanf("%d",&m[i]);
	sort(g+1,g+1+n);
	sort(m+1,m+1+n);
	for(int i=1;i<=n;i++) c+=abs(g[i]-m[i]);
	printf("%d",c);
	return 0;
}