// /*
//  * @lc app=leetcode.cn id=448 lang=cpp
//  *
//  * [448] 找到所有数组中消失的数字
//  */

// // @lc code=start

// #include <iostream>
// #include <vector>
// #include <string>
// #include <set>
// #include <map>
// #include <unordered_map>
// #include <unordered_set>
// #include <stack>
// #include <queue>
// using namespace std;


// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n = nums.size();
//         for (auto& num : nums) {
//             int x = (num - 1) % n;
//             nums[x] += n;
//         }
//         vector<int> ret;
//         for (int i = 0; i < n; i++) {
//             if (nums[i] <= n) {
//                 ret.push_back(i + 1);
//             }
//         }
//         return ret;
//     }
// };

// //此题巧妙至极
// //十分合理地利用了条件
// // @lc code=end
