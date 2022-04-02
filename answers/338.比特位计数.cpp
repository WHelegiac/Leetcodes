// /*
//  * @lc app=leetcode.cn id=338 lang=cpp
//  *
//  * [338] 比特位计数
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
// // class Solution {
// // public:
// //     int countOnes(int x) {
// //         int ones = 0;
// //         while (x > 0) {
// //             x &= (x - 1);
// //             ones++;
// //         }
// //         return ones;
// //     }

// //     vector<int> countBits(int n) {
// //         vector<int> bits(n + 1);
// //         for (int i = 0; i <= n; i++) {
// //             bits[i] = countOnes(i);
// //         }
// //         return bits;
// //     }
// // };

// class Solution {
// public:
//     vector<int> countBits(int n) {
//         vector<int> bits(n + 1);
//         int highBit = 0;
//         for (int i = 1; i <= n; i++) {
//             if ((i & (i - 1)) == 0) {
//                 highBit = i;
//             }
//             bits[i] = bits[i - highBit] + 1;
//         }
//         return bits;
//     }
// };

// //龟儿子的位运算
// //龟儿子的动态规划
// // @lc code=end
