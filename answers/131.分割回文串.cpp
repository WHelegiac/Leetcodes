// /*
//  * @lc app=leetcode.cn id=131 lang=cpp
//  *
//  * [131] 分割回文串
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
//     vector<vector<string>> ans;
//     vector<string> parindromes;

// public:
//     vector<vector<string>> partition(string s)
//     {
//         parindromes.resize(s.size());
//         backtrack(s, 0, 0);
//         return ans;
//     }

// private:
//     void backtrack(string &str, int index, int count)
//     {
//         if (index == str.size())
//         {
//             ans.push_back(vector<string>(parindromes.begin(),parindromes.begin()+ count));
//         }

//         for (int i = index; i < str.size(); i++)
//         {
//             if (isParindrome(str, index, i))
//             {
//                 parindromes[count] = str.substr(index, i - index + 1);
//                 backtrack(str, i + 1, count + 1);
//             }
//         }
//     }
//     bool isParindrome(string &str, int i, int j)
//     {
//         //判断str[i,j]内是否为回文串
//         while (i < j)
//         {
//             if (str[j] != str[i])
//             {
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }
// };

// int main()
// {

//     for (auto strs : Solution().partition("efe"))
//     {
//         for (auto str : strs)
//         {
//             cout << str << " ";
//         }
//         cout << endl;
//     }
// }
// // @lc code=end
