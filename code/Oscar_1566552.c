// Submission ID: 1566552
// Date: 2022-08-01 14:38:16
// Username: Oscar
// Realname: 宓园齐
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h> 
using namespace std;
int n,a[10000],b[10000],x;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
		x+=abs(a[i]-b[i]);
	cout<<x;
    return 0;
}