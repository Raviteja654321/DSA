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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,carry=0;
        ListNode * head=NULL;
        ListNode * curr=head;
        while(l1!=NULL || l2!=NULL)
        {
            sum+=carry;
            if(l1!=NULL)
            {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL)
            {
                sum+=l2->val;
                l2=l2->next;
            }
            if(sum>=10)
            {
                carry=1;
                sum=sum%10;
            }
            else 
            {
                carry=0;
            }
            ListNode* temp=new ListNode;
            temp->val=sum;
            sum=0;
            if(head==NULL)
            {
                head=temp;
                curr=head;
            }
            else 
            {
                curr->next=temp;
                curr=curr->next;
            }
        }
        if(carry==1)
        {
            ListNode* temp=new ListNode;
            temp->val=1;
            ListNode* it=head;
            while(it->next!=NULL)
            {
                it=it->next;
            }
            it->next=temp;
        }
        return head;
    }
};
