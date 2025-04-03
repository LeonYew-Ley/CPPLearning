#include <iostream>
#include <string>
using namespace std;

int countSubstring(const string& str, const string& sub)
{
  if (sub.empty() || str.empty() || sub.length() > str.length())
  {
    return 0;
  }

  int count = 0;
  size_t pos = 0;

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