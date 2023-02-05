/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
"Method:1"
    class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        int n=0,m=0;
        Node* temp=head1;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        temp=head2;
        while(temp!=NULL)
        {
            m++;
            temp=temp->next;
        }
        int mini=min(n,m);
        int maxi=max(n,m);
        int diff=maxi-mini;
        if(n>m)
        {
            while(diff--)
            {
                head1=head1->next;
            }
        }
        else
        {
            while(diff--)
            {
                head2=head2->next;
            }
        }
        while(head1!=NULL && head2!=NULL)
        {
            if(head1==head2)
            {
                return head1->data;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return -1;
    }
};

"Method:2" :

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
        if(a==NULL || b==NULL)
        {
            return NULL;
        }
        ListNode* a_=a;
        ListNode* b_=b;
        while(a_!=b_)
        {
            if(a_==NULL)
            {
                a_=b;
            }
            else 
            {
                a_=a_->next;
            }
            if(b_==NULL)
            {
                b_=a;
            }
            else 
            {
                b_=b_->next;
            }
        }
        return a_;
    }
};
