// Submission ID: 1563250
// Date: 2022-08-01 08:45:59
// Username: luzihan
// Realname: 陆子翰
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
int n, a[MAXN], b[MAXN], ans;
int main(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(int i=1;i<=n;i++)
		scanf("%d", &b[i]);
	sort(a+1, a+n+1);
	sort(b+1, b+n+1);
	for(int i=1;i<=n;i++)
		ans += abs(a[i]-b[i]);
	printf("%d", ans);
	return 0;
} 