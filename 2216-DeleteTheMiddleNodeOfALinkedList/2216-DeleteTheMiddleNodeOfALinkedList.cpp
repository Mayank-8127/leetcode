// Last updated: 2/4/2026, 7:21:51 PM
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow = head, *fast = head;
        if(head->next == NULL) {
            // delete(head);
            return NULL;
        }
        while(fast->next->next && fast->next->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);
        return head;
    }
};