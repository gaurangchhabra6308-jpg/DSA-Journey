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
    void reorderList(ListNode* head) {
        if(head==NULL|| head->next==NULL){
            return;
        }
        ListNode* slow=head;
        ListNode* fast= head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* l2=slow->next;
        slow->next=NULL;

        ListNode* prev=NULL;
        while(l2){
            ListNode* next=l2->next;
            l2->next=prev;
            prev=l2;
            l2=next;
            
        }
        l2=prev;

        ListNode* l1=head;
        while(l2){
           ListNode* next1 = l1->next;
           ListNode* next2 = l2->next;

            l1->next = l2;
            l2->next = next1;

           l1 = next1;
           l2 = next2;
        }
    }
};