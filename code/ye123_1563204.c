// Submission ID: 1563204
// Date: 2022-08-01 08:37:50
// Username: ye123
// Realname: 叶夏蓁
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum+=abs(a[i]-b[i]);
	}
	cout<<sum;
	return 0;
}