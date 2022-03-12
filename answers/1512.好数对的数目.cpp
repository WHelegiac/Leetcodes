/*
 * @lc app=leetcode.cn id=1512 lang=cpp
 *
 * [1512] 好数对的数目
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
using namespace std;

class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {

        int ret = 0;

        vector<int> dict(101, 0);
        for (int n : nums)
        {
            dict[n]++;
        }

        for (int i = 0; i < dict.size(); i++)
        {
            int v = dict[i];
            if (v <= 1)
            {
                continue;
            }

            ret += v * (v - 1) / 2;
        }

        return ret;
    }
};

// @lc code=end
