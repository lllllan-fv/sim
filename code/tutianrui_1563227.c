// Submission ID: 1563227
// Date: 2022-08-01 08:40:44
// Username: tutianrui
// Realname: 屠天瑞
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
typedef long long ll;
int n,a[N],b[N],ans=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",a+i);
	for(int i=1;i<=n;i++)
	scanf("%d",b+i);
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
	ans+=abs(a[i]-b[i]);
	printf("%d",ans);
	return 0;
}
