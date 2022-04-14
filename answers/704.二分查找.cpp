// /*
//  * @lc app=leetcode.cn id=704 lang=cpp
//  *
//  * [704] 二分查找
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
//     int search(vector<int> &nums, int target)
//     {
//         int l = 0, r = nums.size() - 1;
//         //先顶个小习惯在[l,r]内进行搜索
//         while (l <= r )
//         {

//             int mid = l + (r-l)/2;  //虽然在这里有点多此一举，但还是注意一下比较好
//             if(nums[mid] == target){
//                 return mid;
//             }
//             else if( nums[mid] < target){
//                 l = mid + 1;
//             }else{
//                 r = mid -1;
//             }

//         }

//         return -1;
//     }
// };
// // @lc code=end
