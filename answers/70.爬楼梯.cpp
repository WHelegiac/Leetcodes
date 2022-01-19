/*
 * @Author: WanHao
 * @Date: 2021-11-08 18:16:58
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-08 21:00:48
 * @FilePath: \my_leetcodes_question_answers\70.爬楼梯.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
#include <vector>
using namespace std;

class Solution {
public:
   
    
    int climbStairs(int n) { 
        vector<int> vec(n+1, -1);
        vec[1] = 1;
        vec[2] = 2;

        if(vec[n] == -1)
         vec[n] = climbStairs(n-1) + climbStairs(n-2);

        return vec[n];
    }

};
// @lc code=end

