// Submission ID: 1563217
// Date: 2022-08-01 08:39:25
// Username: mouse_meiyihang
// Realname: 梅一航
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
#define REP(j) for (int i = 0; i < j;i++)
int n,cow[1002], bull[1002];
bool cmp(int x, int y) { return x > y; }
int main(){
    cin >> n;
    REP(n)
        cin >> cow[i];
    REP(n)
        cin >> bull[i];
    sort(cow, cow + n, cmp);
    sort(bull, bull + n, cmp);
    int ans=0;
    REP(n){
        ans += abs(cow[i] - bull[i]);
    }
    cout << ans;
}