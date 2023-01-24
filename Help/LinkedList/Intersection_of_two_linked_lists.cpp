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
