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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* tempIgnore = NULL;
        int c = b-a;

        for(int i=1;i<a;i++)
        {
            temp=temp->next;
        }
        tempIgnore = temp->next;
        temp->next = list2;
        for(int i=1;i<=c;i++)
        {
            tempIgnore=tempIgnore->next;
        }
        while(list2->next!=NULL && list2!=NULL)
        {
            list2=list2->next;
        }
        list2->next = tempIgnore->next;
        return list1;
    }
};