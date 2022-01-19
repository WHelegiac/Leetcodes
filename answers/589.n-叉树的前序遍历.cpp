/*
 * @Author: WanHao
 * @Date: 2021-11-08 18:14:25
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-09 23:23:12
 * @FilePath: \my_leetcodes_question_answers\589.n-叉树的前序遍历.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @Author: WanHao
 * @Date: 2021-11-08 18:14:25
 * @LastEditors: Do not edit
 * @LastEditTime: 2021-11-08 19:55:31
 * @FilePath: \my_leetcodes_question_answers\589.n-叉树的前序遍历.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode.cn id=589 lang=cpp
 *
 * [589] N 叉树的前序遍历
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
#include <stack>
#include <algorithm>
using namespace std;
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


class Solution {
public:
    vector<int> preorder(Node* root) {
        //TODO
    }
};
// @lc code=end

