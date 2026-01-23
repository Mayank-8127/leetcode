// Last updated: 1/24/2026, 2:33:24 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        map<struct ListNode*,int> mpp;
        while(temp){
            if(mpp.find(temp) != mpp.end()){
                return temp;
            }else{
                mpp[temp]++;
            }
            temp = temp->next;
        }
        return NULL;
    }
};