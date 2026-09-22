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
    void reorderList(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*second=slow->next;
        slow->next=NULL;
        ListNode*first=head;
        ListNode*prev=NULL;
        while(second!=NULL)
        {
            ListNode*next=second->next;
            second->next=prev;
            prev=second;
            second=next;
        }
        second=prev;
        while(second!=NULL)
        {
            ListNode*temp2=second->next;
            ListNode*temp1=first->next;
            first->next=second;
            second->next=temp1;
            second=temp2;
            first=temp1;
        }

    }
};
