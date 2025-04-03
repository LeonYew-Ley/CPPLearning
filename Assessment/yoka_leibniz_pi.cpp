/*
计算π的值，使用莱布尼茨公式
输入：
第一行：迭代次数N

输出：
使用N次迭代计算的π值，保留6位小数
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

double calculatePi(int n)
{
  double pi = 0.0;
  int sign = 1;

  for (int i = 0; i < n; i++)
  {
    pi += sign * (1.0 / (2 * i + 1));
    sign = -sign;
  }

  // 将结果四舍五入到6位小数
  double result = 4 * pi;
  result = round(result * 1000000.0) / 1000000.0;
  return result;
}

int main()
{
  int n;
  cout << "请输入迭代次数 N: ";
  cin >> n;

  if (n <= 0)
  {
    cout << "请输入一个正整数！" << endl;
    return 1;
  }

  double result = calculatePi(n);

  cout << fixed << setprecision(6);
  cout << "使用 " << n << " 次迭代计算的π值约为: " << result << endl;
  cout << "实际的π值约为: 3.141593" << endl;

  return 0;
}