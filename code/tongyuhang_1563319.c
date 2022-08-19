// Submission ID: 1563319
// Date: 2022-08-01 08:59:25
// Username: tongyuhang
// Realname: 童宇航
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1005],b[1005],ans;
int read(){
	int ret=0;char ch=getchar();
	while('0'>ch||ch>'9')ch=getchar();
	while('0'<=ch&&ch<='9')ret=ret*10+ch-'0',ch=getchar();
	return ret;
}
int main(){
	n=read();
	for(int i=1;i<=n;i++)a[i]=read();
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)b[i]=read();
	sort(b+1,b+1+n);
	for(int i=1;i<=n;i++){
		ans+=abs(a[i]-b[i]);
	}
	printf("%d",ans);
	return 0;
}
//4
//1 2 3 4
//5 6 7 8