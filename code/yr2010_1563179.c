// Submission ID: 1563179
// Date: 2022-08-01 08:34:59
// Username: yr2010
// Realname: 杨润
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000],ans=0;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		ans+=abs(a[i]-b[i]);
	}
	printf("%d",ans);
} 