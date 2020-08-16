/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummyhead = new ListNode(0);
        ListNode* pos = dummyhead;
        while(l1 != NULL && l2 != NULL) {
            if(l1->val < l2->val) {
                pos->next = l1;
                pos = pos->next;
                l1 = l1->next;
            } else {
                pos->next = l2;
                pos = pos->next;
                l2 = l2->next;
            }
        }
        if(l1== NULL) {
            pos->next = l2;
        } else {
            pos->next = l1;
        }
        return dummyhead->next;
    }
};
// @lc code=end

