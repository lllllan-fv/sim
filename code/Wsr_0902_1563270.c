// Submission ID: 1563270
// Date: 2022-08-01 08:51:12
// Username: Wsr_0902
// Realname: 王思瑞
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int ra[10005],rb[10005]; 
int n,a[10005],b[10005];
//void gsort(int s,int t){
//	if(s==t) return;
//	int mid=(s+t)/2;
//	gsort(s,mid);
//	gsort(mid+1,t);
//	int i=s,j=mid+1,k=s;
//	while(i<=mid&&j<=t){
//		if(a[i]<=a[j]){
//			ra[k++]=a[i++];
//		}else{
//			ra[k++]=a[j++];
//		}
//	}
//	while(i<=mid) ra[k++]=a[i++];
//	while(j<=t) ra[k++]=a[j++];
//	for(int u=1;u<=t;u++){
//		a[u]=ra[u];
//	}
//}
//void msort(int s,int t){
//	if(s==t) return;
//	int mid=(s+t)/2;
//	gsort(s,mid);
//	gsort(mid+1,t);
//	int i=s,j=mid+1,k=s;
//	while(i<=mid&&j<=t){
//		if(b[i]<=b[j]){
//			rb[k]=b[i];
//			k++;
//			i++;
//		}else{
//			rb[k]=b[j];
//			k++;
//			j++;
//		}
//	}
//	while(i<=mid) rb[k++]=b[i++];
//	while(j<=t) rb[k++]=b[j++];
//	for(int u=1;u<=t;u++){
//		b[u]=rb[u];
//	}
//}
int main(){
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	//msort(1,n);
	//gsort(1,n);
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
//	for(int i=1;i<=n;i++){
//		printf("%d ",a[i]);
//	}
//	printf("\n");
//	for(int i=1;i<=n;i++){
//		printf("%d,",b[i]);
//	}
	printf("%d",ans);
	return 0;
}