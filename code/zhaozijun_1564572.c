// Submission ID: 1564572
// Date: 2022-08-01 11:07:00
// Username: zhaozijun
// Realname: 赵子俊
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1005],b[1005],f[1005][1005],minn,ans;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;++i){
		scanf("%d",&b[i]);
	}
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	for(int i=1;i<=n;i++){
		ans+=abs(a[i]-b[i]);
	}

	cout<<ans;
	return 0;
}