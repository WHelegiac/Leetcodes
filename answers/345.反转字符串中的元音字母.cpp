// /*
//  * @lc app=leetcode.cn id=345 lang=cpp
//  *
//  * [345] 反转字符串中的元音字母
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

// class Solution
// {
// public:
//     string reverseVowels(string s)
//     {
//         unordered_set<char> yuanyin{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
//         int l = 0, r = s.size() - 1;
//         while (l < r)
//         {
//             while (l<s.size() &&yuanyin.find(s[l]) == yuanyin.end())
//             {
//                 l++;
//             }
//             while (r >= 0 && yuanyin.find(s[r]) == yuanyin.end())
//             {
//                 r--;
//             }
//             if (l < r)
//             {
//                 swap(s[l], s[r]);
//                 l++;
//                 r--;
//             }
//         }

//         return s;
//     }
// };

// int main()
// {

//     string s = "leetcode";
//     cout << Solution().reverseVowels(s);
// }

// //细节才是魔鬼!!!
// //看见了吗? 忽略了原始的限定条件只知道炫技
// // @lc code=end
