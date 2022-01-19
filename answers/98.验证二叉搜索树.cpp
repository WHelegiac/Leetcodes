/*
 * @Author: WanHao
 * @Date: 2021-11-09 20:04:42
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-09 21:33:13
 * @FilePath: \my_leetcodes_question_answers\98.验证二叉搜索树.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    // bool isValidBST(TreeNode *root)
    // {
    //     return isValidBST(root, NULL, NULL);
    // }

    // bool isValidBST(TreeNode *root, TreeNode *minNode, TreeNode *maxNode)
    // {
    //     if (!root)
    //         return true;
    //     if (minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)
    //         return false;
    //     return isValidBST(root->left, minNode, root) && isValidBST(root->right, root, maxNode);
    // }

    //毕竟是别人的方法，还是自己想出来的香！！！
};


// @lc code=end
