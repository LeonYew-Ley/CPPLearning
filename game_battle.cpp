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