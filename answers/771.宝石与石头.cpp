/*
 * @Author: your name
 * @Date: 2021-10-31 21:14:55
 * @LastEditTime: 2021-11-01 08:29:11
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \my_VScodesd:\my_leetcodes_question_answers\771.宝石与石头.cpp
 */
/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */

// @lc code=start
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        int jewslArray[58] ={0};

        for(int i = 0; i <jewels.size();i++){
            if(jewels[i] >= 'A' && jewels[i] <= 'z'){
                jewslArray[jewels[i] - 65] ++;
            }
        }
        for(int i = 0; i < stones.size(); i++){
            if(jewslArray[stones[i] - 65] > 0){
                ans++;
            }
        }
        return ans;
    }

};
   
    
// @lc code=end

