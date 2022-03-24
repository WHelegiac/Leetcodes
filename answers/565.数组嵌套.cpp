// /*
//  * @lc app=leetcode.cn id=565 lang=cpp
//  *
//  * [565] 数组嵌套
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

// class Solution
// {
// public:
//     int arrayNesting(vector<int> &nums)
//     {
//         vector<int> visited(nums.size(), -1);
//         int res = 0;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             int start = nums[i], count = 0;
//             while (visited[start] != -1)
//             {
//                 int temp = start;
//                 start = nums[start];
//                 count++;
//                 visited[start] = temp;
//             }
//             res = max(res, count);
//         }
//         return res;
//     }
// };

// // TODO
// //听说还能优化，看看题解吧
// //  @lc code=end
