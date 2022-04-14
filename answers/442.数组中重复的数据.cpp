/*
 * @lc app=leetcode.cn id=442 lang=cpp
 *
 * [442] 数组中重复的数据
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

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> ret;
//         if(nums.size() == 0){
//             return ret;
//         }

//         sort(nums.begin(),nums.end());
//         for(int i = 0, j = 1;j < nums.size();i++,j++){
//             if(nums[i] == nums[j]){
//                 ret.push_back(nums[i]);
//             }
//         }
//         return ret;
//     }
// };

//看清楚题目,设计一个时间复杂度为O(n)且常量额外空间的算法解决此问题,以上方法显然不合理

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ret;
        int len = nums.size();
        if (len == 0)
        {
            return ret;
        }

        for (int num : nums)
        {
            nums[(num - 1) % len] += len;
        }
        
        //测试
        for(int num : nums){
            cout<<num<<" ";
        }
        cout<<endl;

       for(int i  = 0; i< len;i++){
           if((nums[i] > 2*len) && (nums[i] < 3*len +1)){
               ret.push_back(i +1);
           }
       }
        return ret;
    }
};

//有点状态压缩的味道了

// @lc code=end
