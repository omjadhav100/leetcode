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
     bool isPalindrome(ListNode* start) {
    if(start==NULL || start->next==NULL)
    return true;

    ListNode*slow=start;
    ListNode*fast=start;
    
//middle
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
    fast=fast->next->next;
    }
    //to find reverse
    ListNode *prev=NULL;
    ListNode *curr=slow->next;
    while(curr!=NULL){
       ListNode *next=curr->next;
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next; 
    }
    //compare matching from first to last
    ListNode *first=start;
    ListNode *second=prev;
    while(second!=NULL){
        if(first->val != second->val)
        return false;
        else
        first=first->next;
        second=second->next;
        
    }
    return true;

    }
};