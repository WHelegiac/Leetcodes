// /*
//  * @lc app=leetcode.cn id=437 lang=cpp
//  *
//  * [437] 路径总和 III
//  */

// // @lc code=start
// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */

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

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

// //先来一段最暴力的解法吧!

// class Solution
// {
// public:
//     int pathSum(TreeNode *root, int targetSum)
//     {
//         if(root == NULL){
//             return 0;
//         }

//         int ret = rootSum(root,targetSum);
//         ret += pathSum(root->left,targetSum );
//         ret += pathSum(root->right,targetSum);
//         return ret;
//     }

//     int rootSum(TreeNode *root, int targetSum)
//     {
//         if(root == NULL){
//             return 0;
//         }
       
//         int ret = 0;
//         if (root->val == targetSum) {
//             ret++;
//         } 

//         ret += rootSum(root->left, targetSum - root->val);
//         ret += rootSum(root->right, targetSum - root->val);
//         return ret;

        
//     }
// };

//TODO
// // @lc code=end
