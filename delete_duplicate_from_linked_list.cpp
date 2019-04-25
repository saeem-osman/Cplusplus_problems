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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        else{
            ListNode *temp = head;
                while(temp->next != NULL){
                    if(temp->val == temp->next->val){
                        ListNode* temp2 = temp->next;
                        if(temp->next->next != NULL){
                temp->next = temp->next->next;
                delete(temp2);
            }else{
                temp->next = NULL;
                delete(temp2);
            }
        }else{
            temp = temp->next;
        }
                }
        }
        return head;
    }
};