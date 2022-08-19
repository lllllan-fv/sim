// Submission ID: 1563304
// Date: 2022-08-01 08:56:04
// Username: Wsr_0902
// Realname: 王思瑞
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int ra[10005],rb[10005]; 
int n,a[10005],b[10005];
int main(){
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	sort(a,a+n+1);
	sort(b,b+n+1);
	int ans=0;
	for(int i=1;i<=n;i++){
		if(a[i]>b[i]){
			ans+=a[i]-b[i];
		}else{
			ans+=b[i]-a[i];
		}
	}
	printf("%d",ans);
	return 0;
}