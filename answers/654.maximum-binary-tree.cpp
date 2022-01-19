// /*
//  * @Author: WanHao
//  * @Date: 2021-12-02 12:17:03
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2021-12-02 15:15:42
//  * @FilePath: \my_leetcodes_question_answers\654.maximum-binary-tree.cpp
//  * @FileDescription: Lazy~~~
//  */

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
//     TreeNode *constructMaximumBinaryTree(vector<int> &nums)
//     {
//         // TreeNode *root = NULL;
//         return construct(nums, 0, nums.size() - 1);
//     }

// private:
//     TreeNode *construct(vector<int> nums, int l, int r)
//     {
//         if (l < 0 || r > nums.size() - 1 || l > r)
//         {
//             return NULL;
//         }
//         if (l == r)
//         {
//             return new TreeNode(nums[l]);
//         }
//         int max = 0, maxIndex = 0;
//         for (int i = l; i <= r; i++)
//         {
//             if (nums[i] > max)
//             {
//                 max = nums[i];
//                 maxIndex = i;
//             }
//         }
//         TreeNode *node = new TreeNode(max);
//         node->left = construct(nums, l, maxIndex - 1);
//         node->right = construct(nums, maxIndex + 1, r);
//         return node;
//     }
// };
