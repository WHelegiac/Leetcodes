// /*
//  * @lc app=leetcode.cn id=322 lang=cpp
//  *
//  * [322] 零钱兑换
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

// //暴力递归
// // class Solution
// // {
// // public:
// //     int coinChange(vector<int> &coins, int amount)
// //     {
// //         if (amount == 0)
// //         {
// //             return 0;
// //         }
// //         return process(coins,amount);
// //     }
// //     int process(vector<int> &coins, int amount)
// //     {
// //         if(amount == 0) {
// //             return 0;
// //         }
// //         if(amount < 0){
// //             return -1;
// //         }
// //         int res = INT32_MAX;
// //         for(int coin : coins){
// //             int subProblem = process(coins,amount - coin);
// //             if(subProblem == -1){
// //                 continue;
// //             }
// //             res = min(res,subProblem + 1);
// //         }
// //         return res == INT16_MAX ? -1:res;
// //     }
// // };

// int coinChange(vector<int> &coins, int amount)
// {
//     vector<int> dp(amount + 1, amount + 1);
//     dp[0] = 0;
//     for (int i = 0; i < dp.size(); i++)
//     {
//         for (int coin : coins)
//         {
//             if (i - coin < 0)
//             {
//                 continue;
//             }
//             dp[i] = min(dp[i], 1 + dp[i - coin]);
//         }
//     }
//     return dp[amount] == amount + 1 ? -1 : dp[amount];
// }

// //code=end
