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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* trav=head;
        while(trav!=NULL)
        {
            if( trav->next!=NULL && trav->val==trav->next->val)
            {
                trav->next=trav->next->next;
            }
            else
                            trav=trav->next;
        }return head;
    }
};