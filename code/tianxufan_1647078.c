// Submission ID: 1647078
// Date: 2022-08-07 18:58:04
// Username: tianxufan
// Realname: 田栩帆
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
const int Maxn=1000+5;
int n;
int a[Maxn],b[Maxn];
int ans;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++){
		ans=ans+abs(a[i]-b[i]);
	}
	printf("%d\n",ans);
	return 0;
}