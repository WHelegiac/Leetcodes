/*
 * @Author: WanHao
 * @Date: 2021-12-02 15:39:06
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-12-03 15:53:41
 * @FilePath: \my_leetcodes_question_answers\105.construct-binary-tree-from-preorder-and-inorder-traversal.cpp
 * @FileDescription: Lazy~~~
 */
// /*
//  * @Author: WanHao
//  * @Date: 2021-12-02 15:39:06
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-12-03 15:48:41
//  * @FilePath: \my_leetcodes_question_answers\105.construct-binary-tree-from-preorder-and-inorder-traversal.cpp
//  * @FileDescription: Lazy~~~
//  */
// /*
//  * @lc app=leetcode id=105 lang=cpp
//  *
//  * [105] Construct Binary Tree from Preorder and Inorder Traversal
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

// // struct TreeNode
// // {
// //     int val;
// //     TreeNode *left;
// //     TreeNode *right;
// //     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// //     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x),
// //                                                        left(left), right(right) {}
// // };

// // #include <vector>
// // #include <iostream>
// // #include <string>
// // #include <stack>
// // using namespace std;

// class Solution
// {
// public:
//     TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
//     {
//         return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
//     }

// private:
//     TreeNode *build(vector<int> &preTraArray, int preBeginIndex, int preEndIndex, vector<int> &inTraArray, int inBeginIndex, int inEndIndex)
//     {
//         if (preBeginIndex > preEndIndex)
//         {
//             return NULL;
//         }
//         TreeNode *retNode = new TreeNode(preTraArray[preBeginIndex]);
//         int index = 0;
//         for (int i = inBeginIndex; i <= inEndIndex; i++)
//         {
//             if (inTraArray[i] == preTraArray[preBeginIndex])
//             {
//                 index = i;
//                 break;
                
//             }
//         }

//         int leftTreeSize = index - inBeginIndex;
//         retNode->left = build(preTraArray, preBeginIndex + 1, preBeginIndex + leftTreeSize, inTraArray, inBeginIndex, index - 1);
//         retNode->right = build(preTraArray, preBeginIndex + leftTreeSize + 1, preEndIndex, inTraArray, index + 1, inEndIndex);
//         return retNode;
//     }
// };
// // @lc code=end
