using System;
using System.Collections.Generic;
private static HashSet<int> visited;

public static bool IsNumberInArray(int k, int target)
{
    if (k == target) return true;
    if (k <= 0 || target <= 0) return false;

    visited = new HashSet<int>();
    return CanReachNumber(target, k);
}

private static bool CanReachNumber(int current, int k)
{
    // 基本情况
    if (current == k) return true;
    if (current < k || visited.Contains(current)) return false;

    visited.Add(current);

    // 检查current是否可以通过2x+1得到
    if ((current - 1) % 2 == 0)
    {
        int prev = (current - 1) / 2;
        if (CanReachNumber(prev, k)) return true;
    }

    // 检查current是否可以通过3x+1得到
    if ((current - 1) % 3 == 0)
    {
        int prev = (current - 1) / 3;
        if (CanReachNumber(prev, k)) return true;
    }

    return false;
}
Console.WriteLine("请输入k和target的值（用空格分隔）：");
string[] inputs = Console.ReadLine().Split(' ');
int k = int.Parse(inputs[0]);
int target = int.Parse(inputs[1]);

bool result = IsNumberInArray(k, target);
Console.WriteLine($"target {target} 是否在数组中: {result}");