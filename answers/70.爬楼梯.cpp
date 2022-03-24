// /*
//  * @Author: WanHao
//  * @Date: 2021-11-08 18:16:58
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-11-08 21:00:48
//  * @FilePath: \my_leetcodes_question_answers\70.爬楼梯.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode.cn id=70 lang=cpp
//  *
//  * [70] 爬楼梯
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

//     int climbStairs(int n) { 
//         int p = 0, q = 0 ,r = 1;
//         for(int i = 1; i <= n; i++){
//             p = q;
//             q = r;
//             r = p + q;
//         }

//         return r;
//     }

// };

// //Fuck!
// // @lc code=end

