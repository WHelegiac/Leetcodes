/*
 * @Author: WanHao
 * @Date: 2021-11-08 15:39:49
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-08 17:50:06
 * @FilePath: \my_leetcodes_question_answers\429.n-叉树的层序遍历.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N 叉树的层序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{ // 20 ms, faster than 86.78%
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        if (root == nullptr)
            return {};
        queue<Node *> q;
        q.push(root);
        vector<vector<int>> ans;
        while (!q.empty())
        {
            ans.emplace_back();
            for (int i = q.size(); i >= 1; i--)
            {
                Node *curr = q.front();
                q.pop();
                ans.back().push_back(curr->val);
                for (Node *child : curr->children)
                {
                    q.push(child);
                }
            }
        }
        return ans;
    }
};
// @lc code=end
