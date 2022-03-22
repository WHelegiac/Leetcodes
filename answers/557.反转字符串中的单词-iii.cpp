// /*
//  * @lc app=leetcode.cn id=557 lang=cpp
//  *
//  * [557] 反转字符串中的单词 III
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
//     string reverseWords(string s)
//     {
//         int l, r = 0;
//         while (l < s.size() && r < s.size())
//         {
//             if (s[r] == ' ')
//             {
//                 for (int i = l, j = r - 1; i <= j; i++, j--)
//                 {
//                     swap(s[i], s[j]);
//                 }
//                 r++;
//                 l = r;
//             }
//             else if (r == s.size() - 1)
//             {
//                 for (int i = l, j = r ; i <= j; i++, j--)
//                 {
//                     swap(s[i], s[j]);
//                 }
//                 r++;
//                 l = r;
//             }
//             else
//             {
//                 r++;
//             }
//         }

//         return s;
//     }
// };

// // int main()
// // {

// //     cout << Solution().reverseWords("God Ding");
// // }

// // @lc code=end
