# 学习到的记录
1. C++ 原本叫 C With Classes，所以C++就是从C发展来的。
# vectors
> Vectors相当于C#中的List，动态数组

# inline

inline可以在编译的时候，提示编译器将hpp头文件中的代码块插入到cpp需要使用的地方，增加运行速度，避免函数调用的耗时。

在CodeAcademy上面，一个简单的函数执行时间上0.3s 到 0.02s 的变化，但本地运行却都是0.02s，可能是机器性能，也可能是使用的编译器版本比较新，所以在编译的时候自动内联（inline）了