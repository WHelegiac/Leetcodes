// /*
//  * @Author: WanHao
//  * @Date: 2021-12-01 23:47:01
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-12-02 00:02:54
//  * @FilePath: \my_leetcodes_question_answers\98.validate-binary-search-tree.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode id=98 lang=cpp
//  *
//  * [98] Validate Binary Search Tree
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

// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };


// class Solution
// {
// public:
//     bool isValidBST(TreeNode *root)
//     {
//         if(root == nullptr){
//             return true;
//         }

//         if( (root->left && root->left->val > root->val) || (root->right root->right->val < root->val)){
//             return false;
//         }

//         return isValidBST(root->left) && isValidBST(root->right);

//     }
// };

//todo
// // @lc code=end
