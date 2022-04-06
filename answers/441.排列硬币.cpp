/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start\

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
    int arrangeCoins(int n)
    {
        int left = 1, right = n;
        while (left < right)
        {
            int mid = (right - left + 1) / 2 + left;
            if ((long long)mid * (mid + 1) <= (long long)2 * n)
            {
                left = mid;
            }
            else
            {
                right = mid - 1;
            }
        }
        return left;
    }
};


//二分思想的具象化
//真正的二分,啥活都可以分

// @lc code=end
