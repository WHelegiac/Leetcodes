/*
 * @Author: your name
 * @Date: 2021-11-01 08:32:12
 * @LastEditTime: 2021-11-01 08:42:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \my_VScodesd:\my_leetcodes_question_answers\387.字符串中的第一个唯一字符.cpp
 */
/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    
    int firstUniqChar(string s) {
        int auxArray[26] = {0};
        for(int i = 0; i <s.size() ;i++){
            auxArray[s[i] - 97]++;
        }
        for(int i = 0; i < s.size();i++){
            if(auxArray[s[i] - 97] == 1){
                return  i;
            }
        }
    return -1;

    }
};
// @lc code=end

