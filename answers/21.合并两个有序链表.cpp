// /*
//  * @lc app=leetcode.cn id=21 lang=cpp
//  *
//  * [21] 合并两个有序链表
//  */

// // @lc code=start
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// #include <iostream>
// #include <vector>
// #include <string>
// #include <set>
// #include <map>
// #include <unordered_map>
// #include <unordered_set>
// #include <stack>
// #include <queue>
// #include <cctype>
// #include <utility>
// #include <algorithm>
// using namespace std;

// // class Solution
// // {
// // public:
// //     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
// //     {
// //         if (list1 == NULL)
// //         {
// //             return list2;
// //         }

// //         if (list2 == NULL)
// //         {
// //             return list1;
// //         }

// //         ListNode *dummyHead = new ListNode();
// //         ListNode *temp = dummyHead;
// //         ListNode *p = list1;
// //         ListNode *q = list2;

// //         while (p != NULL && q != NULL)
// //         {
// //             if (p->val < q->val)
// //             {
// //                 temp->next = p;
// //                 p = p->next;
// //                 temp = temp->next;
// //             }
// //             else
// //             {
// //                 temp->next = q;
// //                 q = q->next;
// //                 temp = temp->next;
// //             }
// //         }

// //         //这里还有个小尾巴，最多有一个没有合并完！
// //         temp->next = p == NULL ? q : p;

// //         return dummyHead->next;
// //     }
// // };

// class Solution
// {
// public:
//     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
//     {
//         if(list1 == NULL){
//             return list2;
//         }

//         if( list2 == NULL){
//             return list1;
//         }

//         if(list1->val < list2->val){
//             list1->next = mergeTwoLists(list1->next,list2);
//             return list1;
//         }else{
//             list2->next = mergeTwoLists(list1,list2->next);
//             return list2;
//         }

//         return nullptr;
//     }
// };
// // @lc code=end
