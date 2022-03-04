/*
 * @Author: WanHao
 * @Date: 2022-02-18 17:15:18
 * @LastEditors: Do not edit
 * @LastEditTime: 2022-02-18 17:30:27
 * @FilePath: \undefinedd:\my_leetcodes_question_answers\answers\303.区域和检索-数组不可变.cpp
 * @FileDescription: Lazy~~~
 * 
 */
/*
 * @lc app=leetcode.cn id=303 lang=cpp
 *
 * [303] 区域和检索 - 数组不可变
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

class NumArray {
public:
    NumArray(vector<int>& nums) {
        this->acc.push_back(0);
        for(int num : nums){
            this->acc.push_back(this->acc.back() + num);
        }
    }
    
    int sumRange(int left, int right) {
        return this->acc[right + 1] - this->acc[left];
    }
private:
    vector<int> acc;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
// @lc code=end

