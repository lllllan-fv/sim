// Submission ID: 1569776
// Date: 2022-08-01 20:02:55
// Username: zhengluhan
// Realname: 郑路涵
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
int n,ans,x,num;
int gn[1005];
int mn[1005];
int cha[1005][1005];
int b[1005];
int a[1005];
using namespace std;
/*void dfs(int shuzi){
	if(shuzi==n){
		num=0;
		for(int i=0;i<n;i++){
			num+=cha[i][a[i]];
			
		}
		if(num<ans){
			ans=num;
		}
		return;
	}
	for(int i=0;i<n;i++){
		
		if(b[i]==0){
			b[i]=1;
			a[shuzi]=i;
			dfs(shuzi+1);
			b[i]=0;
		}
	}
	return;
}*/
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&gn[i]);
	}
	sort(gn,gn+n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&mn[i]);
	}
	sort(mn,mn+n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cha[i][j]=abs(gn[i]-mn[j]);
		}
	}
	for(int i=0;i<n;i++){
		ans+=cha[i][i];
	}
	printf("%d",ans);
	return 0;
}

