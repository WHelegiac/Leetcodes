/*
 * @Author: WanHao
 * @Date: 2021-11-08 23:39:10
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-09 14:38:46
 * @FilePath: \my_leetcodes_question_answers\69.sqrt-x.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        int ans = -1;
        int l = 0, r = x;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if ((long long)mid * mid <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end
