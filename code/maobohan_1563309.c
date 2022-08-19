// Submission ID: 1563309
// Date: 2022-08-01 08:57:04
// Username: maobohan
// Realname: 毛博瀚
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,male[1001],fem[1001],sum=0;
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++)	scanf("%d",&male[i]);
	for(int i=0;i<n;i++)	scanf("%d",&fem[i]);
	sort(male,male+n);
	sort(fem,fem+n);
	for(int i=0;i<n;i++)
		sum+=abs(fem[i]-male[i]);
	printf("%d",sum);
	return 0;
}