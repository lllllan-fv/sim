// Submission ID: 1563208
// Date: 2022-08-01 08:38:31
// Username: liyuzhe
// Realname: 李宇哲
// Contest ID: 4701
// Problem ID: 1329
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int a[1005], b[1005];

int main() {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", a + i);
    }
    for(int i = 1; i <= n; i++) {
        scanf("%d", b + i);
    }
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    for(int i = 1; i <= n; i++) {
        sum += abs(a[i] - b[i]);
    }
    printf("%lld", sum);
    return 0;
}