// Submission ID: 1581982
// Date: 2022-08-02 16:47:52
// Username: wangshuyu
// Realname: 王书玙
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int ans;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++) ans+=abs(a[i]-b[i]);
	cout<<ans;
	return 0;
}