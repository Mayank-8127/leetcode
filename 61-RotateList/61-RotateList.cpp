// Last updated: 2/7/2026, 1:33:52 AM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;
        int n = 1;
        ListNode *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            n++;
        }
        k %= n;
        if(k == 0) return head;
        n = n-k;
        ListNode *temp2 = head;
        while(n > 1){
            n--;
            temp2 = temp2->next;
        }
        temp->next = head;
        head = temp2->next;
        temp2->next = NULL;
        return head;
    }
};