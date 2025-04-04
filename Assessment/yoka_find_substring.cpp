/*
给定一个字符串A和一个字符串B，计算B在A中出现的次数

输入：
第一行：字符串A
第二行：字符串B

输出：
B在A中出现的次数
 */

#include <iostream>
#include <string>
using namespace std;

int countSubstring(const string& str, const string& sub)
{
  int count = 0;
  size_t pos = 0; // size_t 无符号整数，从0开始索引，C#中是uint、ushort

  // 使用find函数查找所有出现的位置，包括重叠的情况
  while ((pos = str.find(sub, pos)) != string::npos)
  {
    count++;
    pos++; // 移动到下一个位置继续查找，这样可以找到重叠的情况
  }

  return count;
}

int main()
{
  string A, B;

  // 输入两个字符串
  cout << "请输入字符串A: ";
  getline(cin, A);
  cout << "请输入字符串B: ";
  getline(cin, B);

  // 计算并输出结果
  int result = countSubstring(A, B);
  cout << result << endl;

  return 0;
}