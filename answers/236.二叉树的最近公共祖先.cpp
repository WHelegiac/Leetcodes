/*
 * @Author: WanHao
 * @Date: 2021-11-13 10:55:41
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-13 12:37:42
 * @FilePath: \my_leetcodes_question_answers\236.二叉树的最近公共祖先.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* ans = NULL;

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        deepFirstSearch(root,p,q);
        return ans;
    }

private:
    bool deepFirstSearch(TreeNode* root,TreeNode* p,TreeNode*q){
        if(root == NULL){
            return false;
        }
        
        bool leftChild = deepFirstSearch(root->left,p,q);
        bool rightChild = deepFirstSearch(root->right,p,q);

        if(leftChild || rightChild || (root->val = p->val || root->val == q->val) && (leftChild || rightChild)){
            ans = root;
        }

        return (leftChild || rightChild || (root->val == p->val || root->val == q->val ));
        //TODO
    }
};
// @lc code=end

