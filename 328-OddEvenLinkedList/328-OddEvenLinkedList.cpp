// Last updated: 2/4/2026, 12:30:50 PM
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *even = NULL, *odd = NULL, *eventemp = NULL, *oddtemp = NULL;
        ListNode *temp = head;
        int i = 1;
        while(temp != NULL){
            if(i % 2 == 0){
                if(even == NULL){
                    even = temp;
                    eventemp = temp;
                }else{
                    eventemp->next = temp;
                    eventemp = eventemp->next;
                }
            }else{
                if(odd == NULL){
                    odd = temp;
                    oddtemp = temp;
                }else{
                    oddtemp->next = temp;
                    oddtemp = oddtemp->next;
                }
            }
            temp = temp->next;
            i++;
        }
        if(eventemp) eventemp->next = NULL;
        if(oddtemp) oddtemp->next = even;
        return odd;
    }
};