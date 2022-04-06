// /*
//  * @lc app=leetcode.cn id=697 lang=cpp
//  *
//  * [697] 数组的度
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
// #include <deque>
// #include <cmath>
// #include <queue>
// #include <cctype>
// #include <utility>
// #include <algorithm>
// using namespace std;
// class Solution
// {
// public:
//     int findShortestSubArray(vector<int> &nums)
//     {
//         unordered_map<int, vector<int>> map;
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             if (map.count(nums[i]))
//             {
//                 map[nums[i]][0]++;
//                 map[nums[i]][2] = i;
//             }
//             else
//             {
//                 map[nums[i]] = {1, i, i};
//             }
//         }

//         int degree = 0;
//         int len = 0;
//         for(auto pair : map){
//             if(pair.second[0] > degree){
//                 degree = pair.second[0];
//                 len = pair.second[2] - pair.second[1] + 1;
//             }
//         }

//         return len;
//     }
// };

// //这还是属于思维没有打开呀!!!

// // @lc code=end
