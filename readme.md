

## The software and text similarity tester SIM

[官网地址](https://dickgrune.com/Programs/similarity_tester/)


```
- tree
	- code  提供了一些示例代码供使用
	- exe	Windows 下可执行的 exe 文件
	- sim	Linux 下的可执行文件
	- source 项目源码，可以生成对应的可执行文件
```


## 生成可执行文件

`exe`, `sim` 文件夹下分别放着 Windows 和 Linux 的可执行文件，你也可以通过修改 `source` 目录下的 `Makefile` 中的代码，并执行命令来生成你想要的文件

```sh
make install
```

## 使用方式

`code` 目录下提供了一些代码，以 `sim` 目录下的 Linux 可执行文件为示例：

```sh
> sim/sim_c code/Cyz_1563167.c code/Cyz_1563173.c 

File code/Cyz_1563167.c: 132 tokens, 25 lines (not NL-terminated)
File code/Cyz_1563173.c: 132 tokens, 25 lines (not NL-terminated)
Total input: 2 files (2 new, 0 old), 264 tokens

code/Cyz_1563167.c: line 8-24          |code/Cyz_1563173.c: line 8-24     [132]
using namespace std;                   |using namespace std;
int main()                             |int main()
{                                      |{
 int n,a[10001],b[10001];              | int n,a[10001],b[10001];
 cin >> n;                             | cin >> n;
 for(int i = 1;i<=n;i++) cin >> a[i];  | for(int i = 1;i<=n;i++) cin >> a[i];
 for(int i = 1;i<=n;i++) cin >> b[i];  | for(int i = 1;i<=n;i++) cin >> b[i];
 sort(a+1,a+1+n);                      | sort(a+1,a+1+n);
 sort(b+1,b+1+n);                      | sort(b+1,b+1+n);
 int ans=0;                            | int ans=0;
 for(int i = 1;i<=n;i++)               | for(int i = 1;i<=n;i++)
 {                                     | {
  ans+=abs(a[i]-b[i]);                 |  ans+=abs(a[i]-b[i]);
                                       | 
 }                                     | }
 cout << ans;                          | cout << ans; 
 return 0;                             | return 0;
```

可使用参数：

- -a 将所有新文件与所有文件进行比较。
- -p 输出以相似度百分比给出。
- -S 新文件的内容仅与旧文件进行比较，新老文件用 `/` 分开。
