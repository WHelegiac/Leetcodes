/*
 * @lc app=leetcode.cn id=560 lang=cpp
 *
 * [560] 和为 K 的子数组
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
#include <deque>
#include <cmath>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int,int> dict;
        dict[0] = 1;
        int count = 0, pre = 0;
        for (auto& num :nums){
            pre += num;
            if(dict.find(pre - k) != dict.end()){
                count += dict[pre - k];
            }
            dict[pre]++;
        }
    }
};
// @lc code=end
