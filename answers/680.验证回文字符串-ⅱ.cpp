// /*
//  * @Author: WanHao
//  * @Date: 2022-03-01 16:39:45
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2022-03-01 16:50:52
//  * @FilePath: \my_leetcodes_question_answers\answers\680.验证回文字符串-ⅱ.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode.cn id=680 lang=cpp
//  *
//  * [680] 验证回文字符串 Ⅱ
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

// // class Solution {
// // public:
// //     bool validPalindrome(string s) {

// //     }

// //     bool isPalindrome(string  s){

// //         int len = s.size();
// //         if( len == 0){
// //             return false;
// //         }
// //         int i = 0, j = len- 1;
// //         while(i <j){
// //             if(s[i] != s[j]){
// //                 return false;
// //             }
// //         }

// //         return true;

// //     }

// // };

// //上述做法时间复杂度太高,不可采用

// class Solution
// {
// public:
//     bool validPalindrome(string s)
//     {
//         int i = 0, j = s.size() -1;
//         while(i < j){
//             if(s[i] != s[j]){
//                 return isPalindrome(s,i + 1,j) || isPalindrome(s,i,j-1);
//             }else{
//                 i++;j--;
//             }
//         }
//     }

//     bool isPalindrome(string& s,int i ,int j){
//         if(i == j){
//             return true;
//         }
//         while(i < j){
//             if(s[i] != s[j]){
//                 return false;
//             }
//             i++;j--;
//         }

//         return true;
//     }

// };

// // @lc code=end
