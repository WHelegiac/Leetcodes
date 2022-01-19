/*
 * @Author: WanHao
 * @Date: 2021-11-28 22:46:33
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-28 23:31:25
 * @FilePath: \my_leetcodes_question_answers\257.binary-tree-paths.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



#include <vector>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

// class Solution {
// public:
//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> res;

//         if(root == NULL){
//             return res;
//         }

//         if(root->left == NULL && root->right == NULL){
//             res.push_back(to_string(root->val));
//             return  res;
//         }
//         vector<string> leftString = binaryTreePaths(root->left);
//         for(int i =0 ; i < leftString.size(); i++){
//             res.push_back(to_string(root->val) + "->"+leftString[i]);
//         }
//         vector<string> rightString = binaryTreePaths(root->right);
//         for(int i = 0; i < rightString.size();i++){
//             res.push_back(to_string(root->val) + "->"+rightString[i]);
//         }
//         return res;
//     }
// };


class Solution {
public:
    void helper(TreeNode* root,vector<string>& answer,string curr){
        if(!root)return;
        if(root->left||root->right)curr+=(to_string(root->val)+"->");
        else{
            curr+=(to_string(root->val));
            answer.push_back(curr);
        }
        helper(root->left,answer,curr);
        helper(root->right,answer,curr);  
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        string curr="";
        helper(root,answer,curr);
        return answer;
    }
};
// @lc code=end

