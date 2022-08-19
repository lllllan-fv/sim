// Submission ID: 1563181
// Date: 2022-08-01 08:35:26
// Username: dongruiyu
// Realname: 董芮瑜
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a,b[1005],c[1005];long long maxn;
int main(){
	scanf("%d",&a);
	for(int i=1;i<=a;i++)scanf("%d",b+i);
	for(int i=1;i<=a;i++)scanf("%d",c+i);
	sort(b+1,b+a+1);sort(c+1,c+a+1);
	for(int i=1;i<=a;i++)maxn+=abs(b[i]-c[i]);
	printf("%lld",maxn);
	return 0;
}