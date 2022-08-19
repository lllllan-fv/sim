// Submission ID: 1563621
// Date: 2022-08-01 09:33:28
// Username: wycz2109
// Realname: 单宸鑫
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1005];
int b[1005];
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
	long long tot=0;
	for(int i=1;i<=n;i++){
		tot=tot+abs(a[i]-b[i]);
	}
	cout<<tot;
	
	return 0;
}