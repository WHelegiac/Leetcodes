/*
 * @lc app=leetcode.cn id=389 lang=cpp
 *
 * [389] 找不同
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        int S = 0;
        int T = 0;
         
        for (char c : s){
            S += c;
        }
        for (char c : t){
            T += c;
        }

        return T-S;
    }
};


//这招骚不可言
// @lc code=end

