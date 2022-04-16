// /*
//  * @lc app=leetcode.cn id=17 lang=cpp
//  *
//  * [17] 电话号码的字母组合
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
// public:
//     map<char,string>* hash;
//     Solution(){
//         this->hash = new map<char,string>{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
//     }

//     ~Solution(){
//         delete this->hash;
//     }
//     vector<string> letterCombinations(string digits)
//     {
//         if (digits.size() == 0)
//         {
//             return {};
//         }
//         vector<string> ans;
//         recursion(ans,digits,"",0);
//         return ans;
//     }

//     void recursion(vector<string>&ans, string &digits, string cur, int k)
//     {
//         if(k == digits.size()){
//             ans.push_back(cur);
//             return;
//         }
//         for(char c : (*this->hash)[digits[k]]){
//             recursion(ans,digits,cur+c,k+1);
//         }
//     }
// };

// int main(){
//     string digits = "234";
//     for(string str : Solution().letterCombinations(digits)){
//         cout<<str<<" ";
//     }
// }
// // @lc code=end
