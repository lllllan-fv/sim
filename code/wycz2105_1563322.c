// Submission ID: 1563322
// Date: 2022-08-01 09:00:00
// Username: wycz2105
// Realname: 严旭
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	int male[n+7],female[n+7];
	for(int i=0;i<n;i++)cin>>male[i];
	for(int i=0;i<n;i++)cin>>female[i];
	sort(male,male+n);
	sort(female,female+n);
	unsigned long long ans=0;
	for(int i=0;i<n;i++)ans+=abs(male[i]-female[i]);
	cout<<ans;
	return 0;
} 