// /*
//  * @lc app=leetcode.cn id=77 lang=cpp
//  *
//  * [77] 组合
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
//     vector<vector<int>> ans;

// public:
//     vector<vector<int>> combine(int n, int k)
//     {
//         if(n < k || n <= 0 || k<=0){
//             return {{}};
//         }
//         vector<int> comb;
//         backtrack(n,k,1,comb);
//         return ans;
//     }

// private:
//     void backtrack(int n, int k, int index, vector<int> &combination)
//     {

//         if (combination.size() == k)
//         {
//             ans.push_back(combination);
//             return;
//         }
//         for (int i = index; i <= n; i++)
//         {
//             combination.push_back(i);
//             backtrack(n, k, i + 1, combination);
//             combination.pop_back();
//         }

//     }
// };

// int main(){

//     for(auto nums : Solution().combine(5,3)){
//         for (int num:nums){
//             cout<<num<<" ";
//         }
//         cout<<endl;
//     }
// }
// // @lc code=end
