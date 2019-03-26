## 中文第五版《C++ Primer》习题答案

经典著作《C++ Primer》中文第五版，示例代码基于C++11标准编写。中国工信出版集团 & 电子工业出版社，2013年9月第1版，2018年6月第18次印刷。

编译环境：
* Editor: [Visual Studio Code](https://code.visualstudio.com/)
* OS: macOS Mojave 10.14.4
* Compiler: Apple LLVM version 10.0.1 (clang-1001.0.46.3)
* Debugger: lldb-1001.0.12.1

编译命令：
* `g++ some_ex.cpp -o some_ex -std=c++11` (`clang`**必须**手动指定C++11的flag)
* 这里的`g++`使用的`clang`前端，编译信息与`GNU g++`相比有较大不同
  
```
// g++(clang)版本
$ g++ --version (macOS的g++其实就是clang的别名，并不是真正的GUN g++)

Configured with: --prefix=/Library/Developer/CommandLineTools/usr --with-gxx-include-dir=/Library/Developer/CommandLineTools/SDKs/MacOSX10.14.sdk/usr/include/c++/4.2.1
Apple LLVM version 10.0.1 (clang-1001.0.46.3)
Target: x86_64-apple-darwin18.5.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```

本项目大量参考:
* 第三方英文答案 [C++ Primer 5 answers](https://github.com/Mooophy/Cpp-Primer)
* 第三方中文答案[《C++ Primer》第五版中文版习题答案](https://github.com/huangmingchuan/Cpp_Primer_Answers)
* 官方答案书籍《C++ Primer习题集》，第五版，电子工业出版社，2015年3月第1版，2015年12月第4次印刷

---

## 中文原书勘误
中文《C++ Primer》第五版（截止到2018年6月第18次印刷）包含了较多的错误，部分勘误如下：
### 1. P16 练习1.19
题目“修改你为1.4.1节练习`1.10`（第11页）...”改为“修改你为1.4.1节练习`1.11`（第11页）...”。

### 2. P21 示例代码
1.6 书店程序，有两行注释位置写反了？？？

第5行的注释 *"// 保存下一条交易记录的变量"* 和第8行的注释 *"// 保存和的变量"* 是不是应该**互相交换位置**？

update: 该错误被证实，参见P229中间代码的注释：

```C++
Sales_data total; //保存当前求和结果的变量
...
//编注：trans应该是transaction的缩写，表示交易、事务等
Sales_data trans; //保存下一条交易数据的变量
...
```

### 