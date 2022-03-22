// /*
//  * @lc app=leetcode.cn id=572 lang=cpp
//  *
//  * [572] 另一棵树的子树
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

// class Solution
// {
// public:
//     bool isSubtree(TreeNode *root, TreeNode *subRoot)
//     {
//         return isSameTree(root, subRoot) || isSameTree(root->left, subRoot) || isSameTree(root->right, subRoot);
//     }

//     bool isSameTree(TreeNode *p, TreeNode *q)
//     {
//         if ((p == nullptr && q != nullptr) || (q == nullptr && p != nullptr))
//         {
//             return false;
//         }

//         if (p == nullptr && q == nullptr)
//         {
//             return true;
//         }

//         TreeNode *treeOne = p;
//         TreeNode *treeTwo = q;

//         if (treeOne->val != treeTwo->val)
//         {
//             return false;
//         }

//         return isSameTree(treeOne->left, treeTwo->left) && isSameTree(treeOne->right, treeTwo->left);
//     }
// };


// // @lc code=end

//TODO
