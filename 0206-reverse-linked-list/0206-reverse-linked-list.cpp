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
              ListNode*prev = NULL;
        if(head==NULL)
            return head;
        ListNode*forWard = head->next;
        while(head!=NULL){
		// DRY run this part for better understanding
            forWard = head->next;
            head->next = prev;
            prev = head;
            head = forWard;
        }
        return prev;
    
    }
};