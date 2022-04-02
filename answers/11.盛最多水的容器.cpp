// /*
//  * @lc app=leetcode.cn id=11 lang=cpp
//  *
//  * [11] 盛最多水的容器
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
// #include <cctype>
// #include <utility>
// #include <algorithm>
// using namespace std;
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int l = 0, r = height.size() - 1;
//         int ans = 0;
//         while (l < r) {
//             int area = min(height[l], height[r]) * (r - l);
//             ans = max(ans, area);
//             if (height[l] <= height[r]) {
//                 ++l;
//             }
//             else {
//                 --r;
//             }
//         }
//         return ans;
//     }
// };


// int main(){
//     vector<int> test{1,2,4,3};
//     cout<<Solution().maxArea(test);

// }

// //思路错!白忙活~

// // @lc code=end
