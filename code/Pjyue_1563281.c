// Submission ID: 1563281
// Date: 2022-08-01 08:52:15
// Username: Pjyue
// Realname: 潘居岳
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int g[2005],m[2005];
long long sum=0;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&g[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&m[i]);
	}
	sort(g,g+n);
	sort(m,m+n);
	for(int i=0;i<n;i++){
		sum+= abs(g[i]-m[i]);
    }
	cout<<sum;
	return 0;
}  