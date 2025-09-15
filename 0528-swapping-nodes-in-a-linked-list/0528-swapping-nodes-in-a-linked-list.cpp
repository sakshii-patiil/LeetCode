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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* P1 = NULL;
        ListNode* P2 = head;
        ListNode* temp = head;

        while(k!=1)
        {
            temp=temp->next;
            k--;
        }
        P1 = temp;
        temp=temp->next;

        while( temp!=NULL && temp->next!=NULL)
        {
            P2=P2->next;
            temp=temp->next;
        }
        if(P2->next != NULL && P1->next!=NULL)
            P2=P2->next;
        int val = P2->val;
        P2->val = P1->val;
        P1->val = val;

        return head;
    }
};