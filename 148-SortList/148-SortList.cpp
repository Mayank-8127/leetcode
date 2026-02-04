// Last updated: 2/4/2026, 7:22:17 PM
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
    ListNode* mergeList(ListNode *one, ListNode *two){
        ListNode *ans = NULL, *ans_it = NULL;
        while(one != NULL && two != NULL){
            if(one->val < two->val){
                if(ans == NULL){
                    ans = one;
                    one = one->next;
                    ans_it = ans;
                    ans_it->next = NULL;
                }else{
                    ans_it->next = one;
                    one = one->next;
                    ans_it = ans_it->next;
                    ans_it->next = NULL;
                }
            }
            else{
                if(ans == NULL){
                    ans = two;
                    two = two->next;
                    ans_it = ans;
                    ans_it->next = NULL;
                }else{
                    ans_it->next = two;
                    two = two->next;
                    ans_it = ans_it->next;
                    ans_it->next = NULL;
                }
            }
        }
        while(one != NULL){
            ans_it->next = one;
            one = one->next;
            ans_it = ans_it->next;
            ans_it->next = NULL;
        }
        while(two != NULL){
            ans_it->next = two;
            two = two->next;
            ans_it = ans_it->next;
            ans_it->next = NULL;
        }
        return ans;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode *slow = head, *fast = head;
        while(fast->next->next != NULL && fast->next->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *temp = slow->next;
        slow->next = NULL;
        ListNode *start = sortList(head);
        ListNode *end = sortList(temp);
        return mergeList(start, end);
    }
};