// /*
//  * @lc app=leetcode.cn id=167 lang=cpp
//  *
//  * [167] 两数之和 II - 输入有序数组
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

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int l = 0, r = numbers.size()- 1;
//         vector<int> ans;
//         while(l < r){
//             if(numbers[l] + numbers[r] == target){
//                 ans.push_back(l);
//                 ans.push_back(r);
//                 return ans;
//             }else if(numbers[l] + numbers[r] < target){
//                 l++;
//             }else{
//                 r--;
//             }
//         }
//         return ans;
//     }
// };

// int main(){
//     vector<int> test{2,7,11,15};
//     for(int num: Solution().twoSum(test,9)){
//         cout<<num<<" "
//     }
// }
// // @lc code=end