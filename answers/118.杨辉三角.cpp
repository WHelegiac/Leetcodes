/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ret(numRows);
        for (int i = 0; i < numRows; i++)
        {
            ret[i].resize(i + 1);
            ret[i][0] = 1;
            ret[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
            }
        }

        return ret;
    }
};

//题目虽小
//对循环下标的要求还是很高的
// @lc code=end
