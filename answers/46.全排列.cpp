
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
// //     void backtrack(vector<vector<int>>& res, vector<int>& output, int first, int len){
// //         // 所有数都填完了
// //         if (first == len) {
// //             res.emplace_back(output);
// //             return;
// //         }
// //         for (int i = first; i < len; ++i) {
// //             // 动态维护数组
// //             swap(output[i], output[first]);
// //             // 继续递归填下一个数
// //             backtrack(res, output, first + 1, len);
// //             // 撤销操作
// //             swap(output[i], output[first]);
// //         }
// //     }
// //     vector<vector<int>> permute(vector<int>& nums) {
// //         vector<vector<int> > res;
// //         backtrack(res, nums, 0, (int)nums.size());
// //         return res;
// //     }
// // };
// // TODO

// //官方的写法有点难以理解

// class Solution
// {

// private:
//     vector<bool> isVisited;
//     vector<vector<int>> ans;

// public:
//     void backtrack(vector<int> &nums, int index, vector<int> &permution)
//     {
//         if(index == nums.size()){
//             ans.push_back(permution);
//         }

//         for(int i = index; i< nums.size();i++){
//             if(isVisited[i] == false){
//                 permution.push_back(nums[i]);
//                 backtrack(nums,index+1,permution);
//                 permution.pop_back();
//                 isVisited[i] = false;
//             }
//         }
//     }
//     vector<vector<int>> permute(vector<int> &nums)
//     {
//         ans.clear();
//         vector<int> permution;
//         isVisited = vector<bool>(nums.size(),false);
//         backtrack(nums, 0, permution);
//         return ans;
//     }
// };

// // int main(){
// //     vector<int> test{1,2,3};

// //     for(auto nums: Solution().permute(test)){
// //         for(int num : nums){
// //             cout<<num <<" ";
// //         }
// //         cout<<endl;
// //     }
// // }
