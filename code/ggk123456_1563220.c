// Submission ID: 1563220
// Date: 2022-08-01 08:39:54
// Username: ggk123456
// Realname: 蒋葛凯
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
vector<int> v1,v2;
long long sum=0;
int main(){
	int n;
	scanf("%d",&n);
	v1.assign(n,0);
	v2.assign(n,0);
	for(int i=0;i<n;++i){
		scanf("%d",&v1[i]);
	} 
	for(int i=0;i<n;++i){
		scanf("%d",&v2[i]);
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<n;++i){
		sum+=abs(v1[i]-v2[i]);
	}
	printf("%lld",sum);
	return 0;
}