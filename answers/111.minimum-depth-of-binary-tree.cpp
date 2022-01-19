// /*
//  * @Author: WanHao
//  * @Date: 2021-12-02 08:34:41
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-12-02 09:25:38
//  * @FilePath: \my_leetcodes_question_answers\111.minimum-depth-of-binary-tree.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode id=111 lang=cpp
//  *
//  * [111] Minimum Depth of Binary Tree
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
// //  */

// // #include <vector>
// // #include <iostream>
// // #include <string>
// // #include <stack>
// // #include <queue>
// // using namespace std;

// // struct TreeNode
// // {
// //     int val;
// //     TreeNode *left;
// //     TreeNode *right;
// //     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// //     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// // };

// class Solution
// {

// public:
//     int minDepth(TreeNode *root)
//     {
//         // return minD(root);
//         return minNonRecur(root);
//     }

// private:
//     int minD(TreeNode *node)
//     {
//         if (node == NULL)
//         {
//             return 0;
//         }
//         if (node->right == NULL && node->left == NULL)
//         {
//             return 1;
//         }

//         if (node->right == NULL && node->left != NULL)
//         {
//             return 1 + minD(node->left);
//         }
//         if (node->left == NULL && node->right != NULL)
//         {
//             return 1 + minD(node->right);
//         }

//         return 1 + min(minD(node->right), minD(node->left));
//     }

//     int minNonRecur(TreeNode *node)
//     {
//         if (node == NULL)
//         {
//             return 0;
//         }
//         int depth = 1;
//         queue<TreeNode *> que;
//         que.push(node);
//         while (!que.empty())
//         {
//             for (int i = 0; i < que.size(); i++)
//             {
//                 TreeNode *curNode = que.front();
//                 que.pop();
//                 if (curNode->left == NULL && curNode->right == NULL)
//                 {
//                     //cout<<depth<<endl;
//                     return depth;
//                 }

//                 if (curNode->left != NULL)
//                 {
//                     que.push(curNode->left);
//                 }
//                 if (curNode->right != NULL)
//                 {
//                     que.push(curNode->right);
//                 }
//             }
//             depth++;
//         }
//         return depth;
//     }
// };
// // @lc code=end
