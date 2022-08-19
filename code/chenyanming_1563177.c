// Submission ID: 1563177
// Date: 2022-08-01 08:34:51
// Username: chenyanming
// Realname: meteor_陈彦铭
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,sum=0;
int a[1005],b[1005];
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=n;i>=1;i--){
		sum=sum+abs(a[i]-b[i]);
	}
	printf("%d",sum);
	return 0;
}