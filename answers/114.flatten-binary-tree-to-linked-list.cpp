/*
 * @Author: WanHao
 * @Date: 2021-12-02 10:27:39
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-12-02 11:54:10
 * @FilePath: \my_leetcodes_question_answers\114.flatten-binary-tree-to-linked-list.cpp
 * @FileDescription: Lazy~~~
 */
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
#include <queue>
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
    void flatten(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }

        flatten(root->left);
        flatten(root->right);

        TreeNode *leftNode = root->left;
        TreeNode *rightNode = root->right;

        root->left = NULL;
        root->right = leftNode;
        TreeNode *curNode = root->right;
        while (curNode ? curNode->right : 0)
        {
            curNode = curNode->right;
        }
        if (curNode)
        {
            curNode->right = rightNode;
        }
        else
        {
            root->right = rightNode;
        }
    }
};