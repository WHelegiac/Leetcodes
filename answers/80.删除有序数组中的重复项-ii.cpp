/*
 * @Author: your name
 * @Date: 2021-10-31 20:24:54
 * @LastEditTime: 2021-10-31 20:30:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \my_VScodesd:\my_leetcodes_question_answers\80.删除有序数组中的重复项-ii.cpp
 */
/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除有序数组中的重复项 II
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), count = 0;
    for (int i = 2; i < n; i++)
        if (nums[i] == nums[i - 2 - count]) count++;
        else nums[i - count] = nums[i];
    return n - count;
    }
};
// @lc code=end

