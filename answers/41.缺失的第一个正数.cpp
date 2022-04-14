/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
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
#include <deque>
#include <cmath>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;    


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int len = nums.size();
        for(int& num : nums){
            if(num <= 0){
                num = len + 1;
            }
        }

       for(int i = 0; i< len;i++){
           int num = abs(nums[i]);
           if(num < len){
               nums[i-1] = -nums[i-1];
           }
       }

       for(int i = 0; i< len;i++){
           if(nums[i] > 0){
               return i +1;
           } 
       }
       return len +1;
    }
};

//这题我认栽了!!!
//一看时间复杂度位O（n）就知道排序没指望了
//再看空间复杂度常数级就知道hash没指望了
//那么只剩下原地数组操作了，然而！！！不知道该咋整啊！
// @lc code=end

