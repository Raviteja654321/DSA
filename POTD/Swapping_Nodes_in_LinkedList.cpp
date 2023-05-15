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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        ListNode* store1=NULL;
        ListNode* store2=NULL;
        while(temp!=NULL)
        {
            n++;
            if(n==k)
            {
                store1=temp;
            }
            temp=temp->next;
        }
        int total=n;
        n=0;
        temp=head;
        while(temp!=NULL)
        {
            n++;
            if(n==total-k+1)
            {
                store2=temp;
            }
            temp=temp->next;
        }
        int s2=store2->val;
        store2->val=store1->val;
        store1->val=s2;
        return head;
    }
};
