// Submission ID: 1570119
// Date: 2022-08-01 20:57:50
// Username: zhaozihao
// Realname: 赵子豪
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
#define REP(i,j) for(int i=0;i<j;i++)
#define ll long long
using namespace std;
const int MAXN=1e5;
int a[MAXN],b[MAXN],sum;
int main(){
	int n;
	scanf("%d",&n);
	REP(i,n) scanf("%d",&a[i]);
	REP(i,n) scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+n);
	REP(i,n) sum+=abs(a[i]-b[i]);
	printf("%d",sum);
	return 0;
} 