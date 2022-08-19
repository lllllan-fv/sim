// Submission ID: 1563222
// Date: 2022-08-01 08:40:01
// Username: huhaiyang
// Realname: 胡海洋
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }
    for(int i=0;i<n;i++){
    	cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
    	sum+=abs(a[i]-b[i]);
    }
    cout<<sum;
    return 0;
}