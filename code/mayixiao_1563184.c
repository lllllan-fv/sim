// Submission ID: 1563184
// Date: 2022-08-01 08:35:35
// Username: mayixiao
// Realname: 马一骁
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
int n, a[1005], b[1005];
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for(int i = 1; i <= n; i++)
        scanf("%d", &b[i]);
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    int ans = 0;
    for(int i = 1; i <= n; i++)
        ans += abs(a[i] - b[i]);
    printf("%d", ans);
    return 0;
}