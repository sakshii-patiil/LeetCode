/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* p=head;
        bool isCycle=false;
        if(head==NULL)
        {
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast = fast->next->next;

            if(slow==fast)
            {
                isCycle=true;
               break;
            }
        }
        if(isCycle)
        {
            while(slow!=p)
        {
            slow=slow->next;
            p=p->next;
        }
        return p;
        }
        return NULL;
    }
};