/*
小王在打怪兽，怪兽有n个，每个怪兽有不同的等级，小王初始等级为1，初始血量为100，
小王每次战斗胜利后，等级+1，每提升5级，血量上限增加10，恢复50生命。
小王每次战斗失败后，输出当前等级，并结束游戏。

输入：
第一行：怪兽数量n
第二行：怪兽等级数组，用空格分隔

输出：
小王最终的等级

 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n; // 输入怪物数量

  vector<int> monsters(n); // 存储每个怪物的等级
  for (int i = 0; i < n; i++)
  {
    cin >> monsters[i];
  }

  int level = 1;    // 小王的初始等级
  int health = 100; // 小王的初始血量

  // 依次与每个怪物战斗
  for (int i = 0; i < n; i++)
  {
    int monsterLevel = monsters[i];

    // 如果小王等级大于等于怪物等级，直接跳过
    if (level >= monsterLevel)
    {
      continue;
    }

    // 否则需要战斗
    int levelDiff = monsterLevel - level;

    // 计算血量损失
    if (levelDiff > 1)
    {
      health -= levelDiff * 5;
    }

    // 检查是否失败
    if (health <= 0)
    {
      cout << level << endl;
      return 0;
    }

    // 战斗成功
    level++;                        // 等级+1
    health = min(100, health + 50); // 回复50点血量，但不超过100

    // 每提升5级额外增加10点血量上限
    if (level % 5 == 0)
    {
      health = min(health + 10, 100);
    }
  }

  cout << level << endl;
  return 0;
}