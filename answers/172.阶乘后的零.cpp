/*
 * @lc app=leetcode.cn id=172 lang=cpp
 *
 * [172] 阶乘后的零
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {

        int res;
        for(int i = n; i/5 > 0; i /= 5){
            res += i/5;
        }

        return  res;
    }
};
// @lc code=end

