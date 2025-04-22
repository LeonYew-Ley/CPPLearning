// n名玩家报名测试，m个队伍，实际内测玩家result应该在[n,4*m]区间内
// 报名人数，队伍总数，获得内测资格的玩家数量。
// 示例1： ----------------
// 4个玩家（a,b,c,d)，3个队伍，2个内测资格（a,c)，所以d也能有内测资格
// m组数据，每组示例：人数，名字。第一组：2人，a,b
// 所以，示例1，应该是 ab c dac
// 示例2: -----------------
// ab,c,d,(cd有内测资格)，所以只能是cd，都是单人队

// 数据结构的话，既然已经提前告诉了每队任务数量，可以使用数组存储每队数量，然后拿着内测名单去遍历？太慢了
// 首先使用数组存储全体玩家，每个玩家使用链表存储队伍其余玩家。
// 使用数组存储内测名单，然后遍历内测名单，让内测名单中的玩家去遍历全体玩家，找到队伍其余玩家，加入到内测名单中。

#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
  int total_player_num, total_team_num, total_test_player_num;
  // 输入报名人数，队伍总数，获得内测资格的玩家数量
  cin >> total_player_num >> total_team_num >> total_test_player_num;
  // 使用数组存储全体玩家，每个玩家使用链表存储队伍其余玩家。
  vector<string> player_list(total_player_num);
  vector<vector<string> > team_list(total_team_num);

  // 输入全体玩家
  for (int i = 0; i < total_player_num; i++)
  {
    string player_name;
    cin >> player_name;
    player_list[i] = player_name;
  }

  // 输入队伍
  for (int i = 0; i < total_team_num; i++)
  {
    int team_player_num;
    cin >> team_player_num;
    for (int j = 0; j < team_player_num; j++)
    {
      string player_name;
      cin >> player_name;
      team_list[i].push_back(player_name);
    }
  }

  // 输入内测名单
  vector<string> test_player_list(total_test_player_num);
  for (int i = 0; i < total_test_player_num; i++)
  {
    string player_name;
    cin >> player_name;
    test_player_list[i] = player_name;
  }

  // 输出team_list
  for (int i = 0; i < total_team_num; i++)
  {
    cout << "team " << i << ": ";
    for (int j = 0; j < team_list[i].size(); j++)
    {
      cout << team_list[i][j] << " ";
    }
    cout << endl;
  }
  cout << "test:" << team_list[2][0] << endl;

  // 遍历内测名单，让内测名单中的玩家去遍历全体玩家，找到队伍其余玩家，加入到内测名单中。
  for (int i = 0; i < total_test_player_num; i++)
  {
    string player_name = test_player_list[i];
    for (int j = 0; j < total_player_num; j++)
    {
      if (player_list[j] == player_name)
      {
        for (int k = 0; k < team_list[j].size(); k++)
        {
          test_player_list.push_back(team_list[j][k]);
          cout << "i:" << i << " j:" << j << " k:" << k << endl;
          cout << player_name << " 的队伍：" << team_list[j][k] << endl;
        }
      }
    }
  }
  // 使用set去重
  set<string> test_player_set(test_player_list.begin(), test_player_list.end());
  test_player_list.assign(test_player_set.begin(), test_player_set.end());

  // 输出内测实际名额数量
  cout << test_player_list.size() << endl;
}
