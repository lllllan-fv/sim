// Submission ID: 1563681
// Date: 2022-08-01 09:39:33
// Username: wycz2121
// Realname: 陈楚兮
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
int a[1001],b[1001];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		ans+=abs(a[i]-b[i]);
	}
	cout<<ans;
	return 0;
} 