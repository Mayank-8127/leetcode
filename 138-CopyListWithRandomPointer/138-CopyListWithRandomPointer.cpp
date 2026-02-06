// Last updated: 2/7/2026, 2:58:51 AM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) return NULL;
        Node *temp = head;
        while(temp != NULL){
            Node *temp2 = temp->next;
            temp->next = new Node(temp->val);
            temp->next->next = temp2;
            temp = temp2;
        }

        temp = head;
        while(temp != NULL){
            if(temp->random == NULL) temp->next->random = NULL;
            else temp->next->random = temp->random->next;
            temp = temp->next->next;
        }

        temp = head;
        Node *ans = NULL, *temp2 = head->next;
        while(temp != NULL){
            if(ans != NULL){
                temp2->next = temp->next;
                temp2 = temp2->next;
            }else{
                ans = temp2;
            }
            temp->next = temp->next->next;
            temp = temp->next;
        }

        return ans;
    }
};