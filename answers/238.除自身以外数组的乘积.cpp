/*
 * @lc app=leetcode.cn id=238 lang=cpp
 *
 * [238] 除自身以外数组的乘积
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

// planOne

// class Solution
// {
// public:
//     vector<int> productExceptSelf(vector<int> &nums)
//     {
//         vector<int> ret;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int product = 1;
//             for (int j = 0; j < nums.size(); j++)
//             {
//                 if (j == i)
//                 {
//                     continue;
//                 }
//                 product *= nums[j];
//             }
//             ret.push_back(product);
//         }

//         return ret;
//     }
// };

//以上那种傻逼的做法显然时间超时了

// planTwo

// class Solution
// {
// public:
//     vector<int> productExceptSelf(vector<int> &nums)
//     {
//         int len = nums.size();
//         vector<int> ret, L(len, 0), R(len, 0);
//         L[0] = 1;
//         R[len - 1] = 1;
//         for (int i = 1; i < len; i++)
//         {
//             L[i] = nums[i - 1] * L[i - 1];
//         }

//         for (int i = len - 2; i >= 0; i--)
//         {
//             R[i] = nums[i + 1] *R[i + 1];
//         }

//         for (int i = 0; i < len; i++)
//         {
//             ret.push_back(L[i] * R[i]);
//         }
//         return ret;
//     }
// };

//你以为到这就结束了
// No！ 才刚刚开始~
//还有更省空间的玩法

// planThree


class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int len = nums.size();
        vector<int> ret(len,0);
        ret[0] = 1;
        for (int i = 1; i < len; i++)
        {
            ret[i] = ret[i - 1] * nums[i - 1];
        }
        int R = 1;

        for (int i = len - 1; i >= 0; i--)
        {
            ret[i] = ret[i] * R;
            R *= nums[i];
        }
        return ret;
    }
};

// int main()
// {
//     vector<int> test{1, 2, 3, 4};
//     for (int num : Solution().productExceptSelf(test))
//     {
//         cout << num << " ";
//     }
// }


//深刻理解了缓存的重要性以及缓存的优化
//
// @lc code=end
