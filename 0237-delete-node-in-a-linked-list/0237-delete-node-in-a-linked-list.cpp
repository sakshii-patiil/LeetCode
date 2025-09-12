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
    void deleteNode(ListNode* node) {
        ListNode* currNext = node->next;

        while(currNext->next!=NULL)
        {
            node->val = currNext->val;
            currNext=currNext->next;
            node=node->next;
        }
        node->val = currNext->val;
        node->next=NULL;
    }
};