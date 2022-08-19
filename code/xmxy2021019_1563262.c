// Submission ID: 1563262
// Date: 2022-08-01 08:49:02
// Username: xmxy2021019
// Realname: 陈政源
// Contest ID: 4701
// Problem ID: 1329
#include <bits/stdc++.h>

using namespace std;
int a[1005], b[1005], n, ans;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        }
    sort(a, a + n);
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        ans += max(a[i], b[i]) - min(a[i], b[i]);
        }
    cout << ans;

    return 0;
    }