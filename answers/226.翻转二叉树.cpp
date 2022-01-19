/*
 * @Author: WanHao
 * @Date: 2021-11-09 19:48:04
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-09 20:00:35
 * @FilePath: \my_leetcodes_question_answers\226.翻转二叉树.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
 */

// @lc code=start
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

#include <vector>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),left(left), right(right) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }

        TreeNode* tempNode = root->left;
        root->left = root->right;
        root->right = tempNode;
        root->left = invertTree(root->left);
        root->right = invertTree(root->right);
        return root;
            
    }
};
// @lc code=end

