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
       ListNode* fast =head;
       ListNode* slow = head;

       for(int i =1;i<=n;i++)
       {
        fast=fast->next;
       }
        if(fast==NULL)
        {
            ListNode* temp = head;
            head=head->next;
            delete(temp);
            return head;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* temp = slow->next;
        if(fast==temp)
            slow->next=NULL;
        else
            slow->next=temp->next;

        delete(temp);
        return head;
    }
};