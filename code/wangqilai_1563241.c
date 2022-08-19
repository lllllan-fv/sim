// Submission ID: 1563241
// Date: 2022-08-01 08:43:37
// Username: wangqilai
// Realname: 王麒莱
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int a[N],b[N];
int n;
template <typename T> inline T Abs(T x) {return x > 0 ? x : -x;}
int main(void) {
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1;i <= n; ++ i) cin >> a[i];
	for (int i = 1;i <= n; ++ i) cin >> b[i];
	sort(a + 1,a + n + 1),sort(b + 1,b + n + 1);
	long long cnt = 0;
	for (int i = 1;i <= n; ++ i) cnt += Abs(a[i] - b[i]);
	cout << cnt << "\n";

	return 0;
}