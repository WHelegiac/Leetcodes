// /*
//  * @lc app=leetcode.cn id=93 lang=cpp
//  *
//  * [93] 复原 IP 地址
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

// private:
//     static constexpr int SEG_COUNT = 4;

// private:
//     vector<string> ans;
//     vector<int> segments;

// public:
//     void backtracking(const string &s, int segId, int segStart)
//     {
//         if (segId == SEG_COUNT)
//         {
//             if (segStart == s.size())
//             {
//                 string ipAddr;
//                 for (int i = 0; i < SEG_COUNT; i++)
//                 {
//                     ipAddr += to_string(segments[i]);
//                     if (i != SEG_COUNT - 1)
//                     {
//                         ipAddr += ".";
//                     }
//                 }
//                 ans.push_back(move(ipAddr));
//             }
//             return;
//         }

//         if (segStart == s.size())
//         {
//             return;
//         }

//         if (s[segStart] == '0')
//         {
//             segments[segId] = 0;
//             backtracking(s, segId + 1, segStart + 1);
//         }

//         int addr = 0;
//         for (int segEnd = segStart; segEnd < s.size(); segEnd++)
//         {
//             addr = addr * 10 + (s[segEnd] - '0');
//             if (addr > 0 && addr <= 255)
//             {
//                 segments[segId] = addr;
//                 backtracking(s, segId + 1, segEnd + 1);
//             }else{
//                 break;
//             }
//         }
//     }

//     vector<string> restoreIpAddresses(string s)
//     {
//         segments.resize(SEG_COUNT);
//         backtracking(s,0,0);
//         return ans;
//     }
// };

//这题我暂时还不配!!!
// // @lc code=end
