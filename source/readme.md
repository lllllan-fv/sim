
## 生成可执行文件

前提条件：拥有 `gcc, flex, cp, ln, echo, rm, and wc, or their equivalents` 等环境或命令


> Linux 下可执行文件
当前目录下执行命令


```sh
make install
```

将获得 `sim_c`, `sim_java` 等可执行文件，分别对应不同语言的查重


> Windows 下 exe 文件

修改当前目录下 `Makefile` 文件，取消第 74 行的注释即可 `EXE = .exe` 

```sh
make install
```

将获得 `sim_c.exe`, `sim_java.exe` 等文件。 
