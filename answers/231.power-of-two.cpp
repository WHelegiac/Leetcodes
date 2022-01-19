/*
 * @Author: WanHao
 * @Date: 2021-12-10 16:22:44
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-12-10 16:24:03
 * @FilePath: \my_leetcodes_question_answers\231.power-of-two.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
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
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 ? !(n & n-1) : false;
    }
};
// @lc code=end

