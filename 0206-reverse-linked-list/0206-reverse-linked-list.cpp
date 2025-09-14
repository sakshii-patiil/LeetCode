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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* currNext = head;
        ListNode* temp;
        if(head!=NULL && head->next!=NULL )
        {
            currNext = head->next;
        }else{
            return head;
        }
        while(currNext->next != NULL && currNext!=NULL)
        {
            temp = currNext->next ;
            currNext->next = curr;
            curr=currNext;
            currNext = temp;
        }
        currNext->next = curr;
        head->next = NULL;
        head = currNext;
        return head;
    }
};