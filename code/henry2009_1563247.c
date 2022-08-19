// Submission ID: 1563247
// Date: 2022-08-01 08:44:28
// Username: henry2009
// Realname: 冯以恒
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int ox[1005],cow[1005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ox[i];
	}
	for(int i=1;i<=n;i++){
		cin>>cow[i];
	}
	sort(ox+1,ox+n+1);
	sort(cow+1,cow+n+1);
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+abs(ox[i]-cow[i]);
	}
	cout<<sum;
	return 0;
}