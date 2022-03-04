/*
 * @Author: WanHao
 * @Date: 2022-02-18 01:15:39
 * @LastEditors: Do not edit
 * @LastEditTime: 2022-02-18 01:36:32
 * @FilePath: \my_leetcodes_question_answers\answers\495.提莫攻击.cpp
 * @FileDescription: Lazy~~~l
 */
/*
 * @lc app=leetcode.cn id=495 lang=cpp
 *
 * [495] 提莫攻击
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
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int ret = 0, len = timeSeries.size() -1;

        if (len == -1){
            return ret;
        }

        for (int i = 0; i < len; i++)
        {
            ret += min(duration,timeSeries[i+1]- timeSeries[i]);
        }

        return ret + duration;
    }
};
// @lc code=end
