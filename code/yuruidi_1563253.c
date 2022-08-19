// Submission ID: 1563253
// Date: 2022-08-01 08:46:47
// Username: yuruidi
// Realname: AnteAntibe_余睿迪
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n,m[1010],f[1010],ans;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
		scanf("%d",&m[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&f[i]);
	}
	sort(m,m+n+1);sort(f,f+n+1);
	for(int i=1;i<=n;i++){
		ans+=abs(m[i]-f[i]);
	}
	printf("%d",ans);
	return 0;
}
