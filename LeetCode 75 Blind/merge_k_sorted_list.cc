// Merge k Sorted Lists
/*
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.
*/

// https://leetcode.com/problems/merge-k-sorted-lists/


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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty() or lists.size() == 0){
            return NULL;
        }
        
        auto comp = [&](ListNode *A,ListNode *B){
            return A->val > B->val;
        };
        
        priority_queue<ListNode *,vector<ListNode*>,decltype(comp) > pq(comp);
        
        for(auto &list : lists){
            if(list){
                pq.push(list);
            }
        }
        
        ListNode dummyHead(0);
        ListNode *tail = &dummyHead;
        
        while(!pq.empty()){
            auto temp = pq.top();
            pq.pop();
            tail->next = temp;
            tail = tail->next;
            
            if(temp->next){
                pq.push(temp->next);
            }
        }
        
        tail->next = NULL;
        return dummyHead.next;
    }
};