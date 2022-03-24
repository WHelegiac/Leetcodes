// /*
//  * @lc app=leetcode.cn id=509 lang=cpp
//  *
//  * [509] 斐波那契数
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
//     int fib(int n) {
//         vector<int> dp(n+1,-1);

//         dp[0] = 0;
//         dp[1] = 1;

//         for(int i = 2; i<= n; i++){
//             dp[i] = dp[i-1] + dp[i-2];
//             cout<<dp[i]<<endl;
//         }

//         return dp[n];
//     }
// };


// int main(){


//     cout<<Solution().fib(9);

// }
// // @lc code=end

