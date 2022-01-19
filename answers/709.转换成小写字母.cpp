/*
 * @Author: your name
 * @Date: 2021-10-31 20:44:18
 * @LastEditTime: 2021-10-31 20:54:40
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \my_VScodesd:\my_leetcodes_question_answers\709.转换成小写字母.cpp
 */
/*
 * @lc app=leetcode.cn id=709 lang=cpp
 *
 * [709] 转换成小写字母
 */

// @lc code=start
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(auto it =s.begin(); it != s.end();it++){
            if(*it >= 'A' && *it <= 'Z' ){
                *it += 32;
            }
        }
        return s;
    }
};
// @lc code=end

