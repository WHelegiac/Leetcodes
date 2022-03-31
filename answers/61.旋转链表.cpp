/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
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

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <cctype>
#include <utility>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution
// {
// public:
//     ListNode *rotateRight(ListNode *head, int k)
//     {
//         if(k == 0){
//             return head;
//         }
//         ListNode* dummyHead = new ListNode(-1,head);
//         ListNode* lastNode = dummyHead;
//         ListNode* lastKNode = head;
//         ListNode* tailNode = dummyHead;
//         while(k--){
//             tailNode = tailNode->next;
//         }

//         while(tailNode->next != NULL){
//             lastNode = lastNode->next;
//             lastKNode = lastKNode->next;
//             tailNode = tailNode->next;
//         }

//         tailNode->next = head;
//         lastNode->next = NULL;
//         head = lastKNode;
//         return head;
//     }
// };


//指针寻找倒数第K个节点做到🤮
//字节闭环链表他不香？

// class Solution
// {
// public:
//     ListNode *rotateRight(ListNode *head, int k)
//     {
//         if(head == NULL || k == 0){
//             return head;
//         }

//         ListNode* tail = head;
//         while(head->next != NULL){
//             tail = tail->next;
//         }

//         tail->next = head;

//     }
// };
//TODO
// @lc code=end
