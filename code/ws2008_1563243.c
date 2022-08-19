// Submission ID: 1563243
// Date: 2022-08-01 08:44:03
// Username: ws2008
// Realname: 吴霜
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>//迟钝的舞会 8/1
using namespace std;
int n;
int a[1050],b[1050];
int main(){
	cin >> n;
	for(int i=1;i<=n;i++){//输入
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){//输入
		cin >> b[i];
	}
	sort(a+1,a+n+1);//排序	
	sort(b+1,b+n+1);
	int ans = 0;
	for(int i=1;i<=n;i++){//比较求出最小和
		if(a[i] >= b[i]) ans += a[i]-b[i];
		else ans += b[i] - a[i];
	}
	cout << ans;
	return 0;
}