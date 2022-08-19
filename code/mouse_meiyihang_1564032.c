// Submission ID: 1564032
// Date: 2022-08-01 10:14:21
// Username: mouse_meiyihang
// Realname: 梅一航
// Contest ID: 4701
// Problem ID: 1329
#include<bits/stdc++.h>
using namespace std;
/*€€£*/
#define REP(j) for (int i = 0; i < j;i++)//宏函数之懒狗for循环
int n,cow[1002], bull[1002];
bool cmp(int x, int y) { return x > y; }//Compare
int main(){
    cin >> n;//输入
    REP(n)
        cin >> cow[i];
    REP(n)
        cin >> bull[i];
    sort(cow, cow + n, cmp);//排序
    sort(bull, bull + n, cmp);
    int ans=0;
    REP(n){//贪心
        ans += abs(cow[i] - bull[i]);
    }
    cout << ans;//输出
    return 0;//完美结束
}