// Submission ID: 1563306
// Date: 2022-08-01 08:56:41
// Username: wycz2103
// Realname: 邵子赫Ανταρκτική
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<n;i++){
    	cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	int c=0;
	for(int i=0;i<n;i++){
		c+=abs(a[i]-b[i]);
	}
	cout<<c;
    return 0;
}
