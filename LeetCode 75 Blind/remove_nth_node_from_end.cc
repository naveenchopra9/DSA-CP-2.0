// Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Given the head of a linked list, remove the nth node from the end of the list and return its head.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *first = head, *second = head;
        
        for(int i=0;i<n;i++) second = second->next;
        if(!second) return head->next;
        while(second->next){
            second = second->next;
            first = first->next;
        }
       
       
        first->next = first->next->next;
        return head;
    }
};