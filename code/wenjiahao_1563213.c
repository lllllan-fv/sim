// Submission ID: 1563213
// Date: 2022-08-01 08:38:39
// Username: wenjiahao
// Realname: 温家浩
// Contest ID: 4701
// Problem ID: 1329
# include <bits/stdc++.h>
using namespace std;

int a[1010],b[1010],n;
long long cnt; 

int main(){
	cin>>n;
	for (int i = 1;i <= n;i++) cin>>a[i];
	for (int i = 1;i <= n;i++) cin>>b[i];
	sort(a + 1,a + n + 1);
	sort(b + 1,b + n + 1);
	for (int i = 1;i <= n;i++) cnt += abs(a[i] - b[i]);
	cout<<cnt<<endl;
	return 0;
}
