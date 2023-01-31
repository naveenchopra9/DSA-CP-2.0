// Merge Two Sorted Lists
// https://leetcode.com/problems/merge-two-sorted-lists/

/*
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
*/


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
        ListNode *dummy = new ListNode(0);
        ListNode *prev = dummy;
        
        while(l1 != NULL and l2 != NULL){
            if(l1->val <= l2->val){
                prev->next = l1;
                l1 = l1->next;
            }
            else{
                prev->next = l2;
                l2 = l2->next;
            }
            
            prev = prev->next;
        }
        
        prev->next = l1 == NULL ? l2 : l1;
        return dummy->next;
    }
};