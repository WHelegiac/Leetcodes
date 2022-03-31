// /*
//  * @lc app=leetcode.cn id=217 lang=cpp
//  *
//  * [217] 存在重复元素
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


// //省空间的做法

// // class Solution {
// // public:
// //     bool containsDuplicate(vector<int>& nums) {
// //         sort(nums.begin(),nums.end());
// //         for(int i = 1; i< nums.size();i++){
// //             if(nums[i] == nums[i-1]){
// //                 return false;
// //             }
// //         }
// //         return true;
// //     }
// // };


// //省时间的做法

// // class Solution {
// // public:

// //     bool containsDuplicate(vector<int>& nums) {
// //         unordered_set<int> hash;
// //         for(int num : nums){
// //             if(hash.find(num) != hash.end()){
// //                 return true;
// //             }
// //             hash.insert(num);
// //         }

// //         return false;
// //     }
// // };



// // @lc code=end

