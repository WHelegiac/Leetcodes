/*
 * @Author: WanHao
 * @Date: 2022-03-01 16:39:45
 * @LastEditors: Do not edit
 * @LastEditTime: 2022-03-01 16:50:52
 * @FilePath: \my_leetcodes_question_answers\answers\680.验证回文字符串-ⅱ.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=680 lang=cpp
 *
 * [680] 验证回文字符串 Ⅱ
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

private:
    bool isPalindrome(const string &s, int l, int r)
    {
        for (; l < r; i++, j--)
        {
            if (s[l] != s[r])
            {
                return false;
            }
        }
        return true;
    }

public:
    bool validPalindrome(string s)
    {
        int l = 0, r = s.size() - 1;
        if (isPalindrome(s, l, r))
        {
            return true;
        }

        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                return isPalindrome(s,l,r-1) || isPalindrome(s,l+1,r);
            }
        }

        return true;
    }
};
// @lc code=end
