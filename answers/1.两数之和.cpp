/*
 * @Author: your name
 * @Date: 2021-10-31 20:34:48
 * @LastEditTime: 2021-11-09 14:59:01
 * @LastEditors: Do not edit
 * @Description: In User Settings Edit
 * @FilePath: \my_leetcodes_question_answers\1.两数之和.cpp
 */
/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
// @lc code=start

#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int,int> myHash(nums.size());
        for(int i = 0; i < nums.size(); i++){
            if(myHash.find(target - nums[i]) != myHash.end()){
                return {myHash[target - nums[i]] , i};
            }
            myHash[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

