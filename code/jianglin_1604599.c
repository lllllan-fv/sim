// Submission ID: 1604599
// Date: 2022-08-04 11:51:47
// Username: jianglin
// Realname: 姜林
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1050],b[1050];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=abs(a[i]-b[i]);
	}
	cout<<ans;
	return 0;
}