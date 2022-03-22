/*
 * @lc app=leetcode.cn id=617 lang=cpp
 *
 * [617] 合并二叉树
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

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
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
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == nullptr)
        {
            return root2;
        }
        if (root2 == nullptr)
        {
            return root1;
        }
        add(root1, root2);
        return root1;
    }

    void add(TreeNode *p, TreeNode *q)
    {
        if (p == nullptr && q == nullptr)
        {
            return;
        }
        if (p == nullptr)
        {
            p = q;
        }

        if (p != nullptr && q != nullptr)
        {
            p->val += q->val;

            add(p->left, q->left);
            add(p->right, q->right);
        }

    }
};

//TODO
//能否修正上面的方法？

// @lc code=end
