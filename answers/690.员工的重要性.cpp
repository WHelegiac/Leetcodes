/*
 * @lc app=leetcode.cn id=690 lang=cpp
 *
 * [690] 员工的重要性
 */

// @lc code=start
/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};


*/

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <deque>
#include <cmath>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

class Employee
{
public:
    int id;
    int importance;
    vector<int> subordinates;
};


// class Solution
// {
// public:
//     int getImportance(vector<Employee *> employees, int id)
//     {
//         int ans = 0;
//         queue<int> que;
//         que.push(id);
//         while (!que.empty())
//         {
//             int num = que.size();
//             for (int i = 0; i < num; i++)
//             {
//                 int temp = que.front();
//                 que.pop();
//                 vector<int> subs = employees[temp - 1]->subordinates;
//                 for (int id : subs)
//                 {
//                     Employee* worker = employees[id - 1];
//                     ans += worker->importance;
//                     que.push(worker->id);
//                 }
//             }
//         }
//         return ans;
//     }
// };

//TODO

//其实没必要多此一举的 反而题目还解错了!
// @lc code=end
