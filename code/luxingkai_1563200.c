// Submission ID: 1563200
// Date: 2022-08-01 08:37:23
// Username: luxingkai
// Realname: 陆星恺
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
const int SIZE=1009;
int n,ans,a[SIZE],b[SIZE],lxk;
bool cmp(const int a,const int b){
	return a>b;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp);
	for(int i=1;i<=n;i++)ans+=max(a[i]-b[i],b[i]-a[i]);
	cout<<ans<<endl;
	return 0;
}
//lxk 