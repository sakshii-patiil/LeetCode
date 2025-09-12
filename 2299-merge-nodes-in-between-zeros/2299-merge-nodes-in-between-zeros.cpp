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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* newHead =  NULL;
        ListNode* tempNewList = new ListNode;
        int sum=0;

        while(temp!=NULL && temp->next!=NULL)
        {
            ListNode* newNode = new ListNode ;
            sum +=temp->val;
            temp=temp->next;
            if(temp->val ==0)
            {
                newNode->val = sum;
                newNode->next = NULL;
                if(newHead == NULL)
                {
                    newHead = newNode;
                    tempNewList = newNode;
                }else{
                    tempNewList->next = newNode;
                    tempNewList=tempNewList->next;
                }
                sum=0;
                temp=temp->next;
            }
        }
        return newHead;
    }
};