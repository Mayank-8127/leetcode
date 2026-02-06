// Last updated: 2/7/2026, 1:20:59 AM
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
        ListNode *temp = head;
        ListNode *prev = nullptr;
        ListNode *prevprev = nullptr;
        while(temp){
            prev = temp;
            temp = temp->next;
            prev->next = prevprev;
            prevprev = prev;
        }
        head = prev;
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *t0 = NULL, *t1 = head, *t2 = head, *t3 = head, *ans = NULL;
        int i = 0;
        while(t3 != NULL){
            while(i < k && t3 != NULL){
                i++;
                t2 = t3;
                t3 = t3->next;
            }
            if(i != k) break;
            t2->next = NULL;
            t2 = reverseList(t1);
            i = 0;
            if(ans == NULL) ans = t2;
            if(t0) t0->next = t2;
            if(t3) t1->next = t3;
            t0 = t1;
            t1 = t3;
            t2 = t3;
        }
        return ans;
    }
};