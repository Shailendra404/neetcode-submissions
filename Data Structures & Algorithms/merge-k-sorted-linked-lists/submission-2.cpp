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
ListNode*merge(ListNode*l1,ListNode*l2)
{
    ListNode*dummy=new ListNode(0);
    ListNode*temp=dummy;
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->val<l2->val)
        {
            temp->next=l1;
            l1=l1->next;
        }
        else{
            temp->next=l2;
            l2=l2->next;
        }
        temp=temp->next;
    }
    if(l1!=NULL)
    temp->next=l1;
    else
    temp->next=l2;
    return dummy->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        return NULL;
        int interval=1;
        while(interval<lists.size())
        {
            for(int i=0;i+interval<lists.size();i+=interval*2)
            {
              lists[i]=merge(lists[i],lists[i+interval]);
            }
            interval*=2;
        }
        return lists[0];
    }
};
