// /*
//  * @lc app=leetcode.cn id=645 lang=cpp
//  *
//  * [645] 错误的集合
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
//     vector<int> findErrorNums(vector<int> &nums)
//     {
//         vector<int> ret;
//         vector<int> hash(nums.size() + 1, -1);
//         for (int num : nums)
//         {
//             hash[num]++;
//         }

//         int lost, repeat;

//         for (int i = 1; i <= nums.size(); i++)
//         {
//             if (hash[i] != 0)
//             {
//                 if (hash[i] == 1)
//                 {
//                     repeat = i;
//                 }
//                 else
//                 {
//                     lost = i;
//                 }
//             }
//         }

//         ret.push_back(repeat);
//         ret.push_back(lost);
//         return ret;
//     }
// };

// // int main(){

// //     vector<int> test{1,};
// //     vector<int> print = Solution().findErrorNums(test);
// //     for(int num : print){
// //         cout<<num<<" ";
// //     }
// // }
// // @lc code=end
