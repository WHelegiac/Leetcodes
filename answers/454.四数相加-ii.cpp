/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
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
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        unordered_map<int, int> umap;
        for (int num : nums1)
        {
            for (int n : nums2)
            {
                umap[num + n]++;
            }
        }
        int count = 0;
        for (int num : nums3)
        {
            for (int n : nums4)
            {
                if (umap.find(0-(num + n)) != umap.end())
                {
                    count += umap[0-(num + n)];
                }
            }
        }

        return count;
    }
};
// @lc code=end
