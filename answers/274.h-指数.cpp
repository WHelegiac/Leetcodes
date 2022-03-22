// /*
//  * @lc app=leetcode.cn id=274 lang=cpp
//  *
//  * [274] H 指数
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
//     int hIndex(vector<int> &citations)
//     {
//         //在[l,r]范围内二分搜索
//         int res;
//         int l = 0, r = maxOfVector(citations);
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (isIndex(citations, mid))
//             {
//                 l = mid;
//             }
//         }
//     }

//     bool isIndex(vector<int> &citations, int n)
//     {
//         int refer = 0;
//         for (int i : citations)
//         {
//             if (i >= n)
//             {
//                 refer++;
//             }
//         }

//         if (refer == n)
//         {
//             return true;
//         }

//         return false;//TODO
//     }

//     int maxOfVector(vector<int> &v)
//     {
//         int max = 0;
//         for (int i : v)
//         {
//             if (i > max)
//             {
//                 max = i;
//             }
//         }

//         return max;
//     }
// };
// // @lc code=end
