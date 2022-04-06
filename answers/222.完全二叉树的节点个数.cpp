// /*
//  * @lc app=leetcode.cn id=222 lang=cpp
//  *
//  * [222] 完全二叉树的节点个数
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
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),left(left), right(right) {}
// };


// class Solution {
// public:
//     int countNodes(TreeNode* root) {
//         if(root == NULL){
//             return 0;
//         }
//         int ret = 0;
//         process(root,ret);
//         return ret;
//     }

//     void process(TreeNode* root,int& count){
//         if(root == NULL){
//             return;
//         }
//         count++;
//         process(root->left,count);
//         process(root->right,count);
//     }
// };
// // @lc code=end

