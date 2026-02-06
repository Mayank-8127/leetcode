// Last updated: 2/7/2026, 1:21:01 AM
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
        // int i = 0;
        // ListNode *temp = head;
        // while(temp){
        //     i++;
        //     temp = temp->next;
        // }
        // if(i == n){
        //     return head->next;
        // }
        // temp = head;
        // while(i > n+1){
        //     i--;
        //     temp = temp->next;
        // }
        // temp->next = temp->next->next;
        // return head;
        ListNode *slow = head, *fast = head;
        for(int i = 0; i < n; i++){
            fast = fast->next;
        }
        while(fast != NULL && fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(fast == NULL){
            ListNode *temp = head;
            head = head->next;
            delete(temp);
            return head;
        }
        ListNode *temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);
        return head;
    }
};