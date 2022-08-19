// Submission ID: 1563196
// Date: 2022-08-01 08:36:50
// Username: zhaijunlin
// Realname: 翟钧麟
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int b[1005]; 
int main() {
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=abs(a[i]-b[i]);
	}
	cout<<ans;
}