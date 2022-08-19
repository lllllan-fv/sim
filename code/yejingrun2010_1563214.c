// Submission ID: 1563214
// Date: 2022-08-01 08:38:46
// Username: yejingrun2010
// Realname: 叶景润
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
long long g[1005],m[1005]; 
int main(){
    long long n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
		cin>>g[i];
	}
	for(int i=1;i<=n;i++){
		cin>>m[i];
	}
	sort(g+1,g+n+1);
	sort(m+1,m+n+1);
	for(int i=1;i<=n;i++){
		sum+=abs(g[i]-m[i]);
	}
	cout<<sum;
    return 0;
}