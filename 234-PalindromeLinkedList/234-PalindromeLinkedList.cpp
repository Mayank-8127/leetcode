// Last updated: 2/4/2026, 12:30:55 PM
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
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head->next == NULL) return head;
        ListNode *temp1 = NULL, *temp2 = NULL, *temp3 = head;
        while(temp3->next){
            temp2 = temp3;
            temp3 = temp3->next;
            temp2->next = temp1;
            temp1 = temp2;
        }
        temp3->next = temp2;
        return temp3;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head;
        if(head == NULL) return true;

        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* reverse = reverseList(slow->next);
        ListNode *it1 = head, *it2 = reverse;
        while(it2 != NULL){
            if(it1->val != it2->val) return false;
            it1 = it1->next;
            it2 = it2->next;
        }
        // reverse = reverseList(reverse);
        // slow->next = reverse;
        return true;
    }
};