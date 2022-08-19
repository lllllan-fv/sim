// Submission ID: 1563221
// Date: 2022-08-01 08:39:56
// Username: whxy014
// Realname: 盛赞宇
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1009],b[1009],ans;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	for(int i=1;i<=n;i++){
		ans+=abs(a[i]-b[i]);
	}
	cout<<ans;
    return 0;
}