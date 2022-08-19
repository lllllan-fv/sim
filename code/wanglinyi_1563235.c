// Submission ID: 1563235
// Date: 2022-08-01 08:41:47
// Username: wanglinyi
// Realname: 汪林溢
// Contest ID: 4701
// Problem ID: 1329
#include <iostream>
#include <algorithm>
using namespace std;
int g[1005],m[1005];
int main(){
	int n;
	cin>>n;
	for (int i=0 ; i<n ; i++) cin>>g[i];
	for (int i=0 ; i<n ; i++) cin>>m[i];
	sort(g,g+n);
	sort(m,m+n);
	int tot=0;
	for (int i=0 ; i<n ; i++) tot+=abs(g[i]-m[i]);
	cout<<tot;
} 
