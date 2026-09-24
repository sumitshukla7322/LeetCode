class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL )return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp=NULL;
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        temp->next=slow->next;
        return head;

        
    }
};