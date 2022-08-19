// Submission ID: 1563171
// Date: 2022-08-01 08:34:09
// Username: whxy035
// Realname: 陈安顺
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int n,ans,h1[N],h2[N];
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&h1[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&h2[i]);
	}
	sort(h1,h1+n);
	sort(h2,h2+n);
	for(int i=0;i<n;i++){
		ans+=abs(h1[i]-h2[i]);
	}
	printf("%d",ans);
	return 0;
}