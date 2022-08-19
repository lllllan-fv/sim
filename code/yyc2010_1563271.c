// Submission ID: 1563271
// Date: 2022-08-01 08:51:21
// Username: yyc2010
// Realname: 姚羿成
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    }
    for(int i=1;i<=n;i++){
    	cin>>b[i];
	}
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
    	if(a[i]>b[i]){
    		sum+=a[i]-b[i];
		}else sum+=b[i]-a[i];
    }
    cout<<sum;
    return 0;
} 