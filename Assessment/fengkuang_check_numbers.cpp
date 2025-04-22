// 已知数字k在数组中，2k+1和3k+1也在数组中，输入k和target，判断target是否在数组中

#include <iostream>
#include <unordered_set>
using namespace std;

// 全局变量，用于记录已访问的数字
unordered_set<int> visited;

bool canReachKFromTarget(int current, int k);

// 从target倒推k是否可达
bool isKReachableFromTarget(int k, int target)
{
    if (k == target) return true;
    if (k <= 0 || target <= 0) return false;

    visited.clear();
    return canReachKFromTarget(target, k);
}

bool canReachKFromTarget(int current, int k)
{
    // 基本情况
    if (current == k) return true;
    if (current < k || visited.find(current) != visited.end()) return false;

    visited.insert(current);

    // 从target倒推k
    // 检查current是否可以通过2x+1得到
    if ((current - 1) % 2 == 0)
    {
        int prev = (current - 1) / 2;
        if (canReachKFromTarget(prev, k)) return true;
    }

    // 检查current是否可以通过3x+1得到
    if ((current - 1) % 3 == 0)
    {
        int prev = (current - 1) / 3;
        if (canReachKFromTarget(prev, k)) return true;
    }

    return false;
}

int main()
{
    int k, target;

    cout << "请输入k和target的值（用空格分隔）：";
    cin >> k >> target;

    // 使用从target倒推k的方法
    bool result = isKReachableFromTarget(k, target);
    cout << target << " 是否和 " << k << " 在同一容器中："
         << (result ? "是" : "否") << endl;

    return 0;
}