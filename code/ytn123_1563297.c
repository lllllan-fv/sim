// Submission ID: 1563297
// Date: 2022-08-01 08:54:03
// Username: ytn123
// Realname:  杨天宁
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,ans;
int a[1010],b[1010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++) ans+=abs(a[i]-b[i]);
	cout<<ans;
}