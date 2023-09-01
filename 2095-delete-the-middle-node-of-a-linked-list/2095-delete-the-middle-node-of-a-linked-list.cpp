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
    
    int findlen(ListNode* head){
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        int n=findlen(head);
        int i=0;
        int j=(n/2);
        ListNode* prev=head,*curr=NULL;
        if(head==NULL or head->next==NULL) return NULL;
        while(i<j-1){
            prev=prev->next;
            i++;
        }
         curr=prev->next;
        
        prev->next=curr->next;
        curr->next=NULL;
        delete(curr);
        
        return head;
    }
};