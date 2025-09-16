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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        ListNode* currNext = head;

        if(head!=NULL && curr->next!=NULL)
        {
            currNext = head->next;
        }else{
            return head;
        }

        while(currNext!=NULL && currNext->next!=NULL)
        {
            int temp = curr->val;
            curr->val = currNext->val;
            currNext->val = temp;
            curr = currNext->next;
            currNext = curr->next;
        }
        if(currNext==NULL)
        {
            return head;
        }else{
            int temp = curr->val;
            curr->val = currNext->val;
            currNext->val = temp;
        }
        return head;
    }
};