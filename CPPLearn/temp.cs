using System;
using System.Collections.Generic;

public class Solution
{
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

    public static void Main(string[] args)
    {
        // 测试用例
        Console.WriteLine("请输入k的值：");
        int k = int.Parse(Console.ReadLine());

        Console.WriteLine("请输入target的值：");
        int target = int.Parse(Console.ReadLine());

        bool result = IsNumberInArray(k, target);
        Console.WriteLine($"target {target} 是否在数组中: {result}");
    }
}
