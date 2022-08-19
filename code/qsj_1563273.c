// Submission ID: 1563273
// Date: 2022-08-01 08:51:26
// Username: qsj
// Realname: 裘邵鉴
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int man[1005],woman[1005];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&man[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&woman[i]);
	}
	sort(man+1,man+n+1);
	sort(woman+1,woman+n+1);
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=abs(man[i]-woman[i]);
	}
	printf("%d",ans);
 	return 0;
}
