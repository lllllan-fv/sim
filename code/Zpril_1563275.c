// Submission ID: 1563275
// Date: 2022-08-01 08:51:54
// Username: Zpril
// Realname: 周毅兆
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>
using namespace std;

int a[1001],b[1001];

int main()
{
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int i = 1;i <= n;i++)
        cin >> b[i];
    sort(a + 1,a + n + 1);
    sort(b + 1,b + n + 1);
    int cnt = 0;
    for(int i = 1;i <= n;i++)
        cnt += abs(a[i] - b[i]);
    cout << cnt;
    return 0;
}
