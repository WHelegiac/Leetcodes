/*
 * @Author: WanHao
 * @Date: 2022-01-09 17:11:51
 * @LastEditors: Do not edit
 * @LastEditTime: 2022-01-09 17:18:38
 * @FilePath: \my_leetcodes_question_answers\206.reverse-linked-list.cpp
 * @FileDescription: Lazy~~~
 */
/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *preNode = nullptr;
        ListNode *curNode = head;
        ListNode *nextNode = curNode->next;

        while (nextNode != nullptr)
        {
            curNode->next = preNode;

            preNode = curNode;
            curNode = nextNode;
            nextNode = nextNode->next;
        }
        return curNode;
    }
};
// @lc code=end
