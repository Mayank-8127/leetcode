// Last updated: 1/24/2026, 2:33:19 AM
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
        // ListNode *temp = head;
        // ListNode *prev = nullptr;
        // ListNode *prevprev = nullptr;
        // while(temp){
        //     prev = temp;
        //     temp = temp->next;
        //     prev->next = prevprev;
        //     prevprev = prev;
        // }
        // head = prev;
        // return head;

        // if(head == NULL || head->next == NULL){
        //     return head;
        // }
        // ListNode *temp = head;
        // head = head->next;
        // ListNode *ans = reverseList(head);
        // head->next = temp;
        // if(temp) temp->next = NULL;
        // return ans;

        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *newHead = reverseList(head->next);
        ListNode *front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
};