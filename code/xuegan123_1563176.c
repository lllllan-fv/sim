// Submission ID: 1563176
// Date: 2022-08-01 08:34:47
// Username: xuegan123
// Realname:  薛淦
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)scanf("%d",&b[i]);
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	for(int i=1;i<=n;i++)ans+=abs(a[i]-b[i]);
	cout<<ans;
} 