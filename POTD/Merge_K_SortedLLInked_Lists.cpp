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
    ListNode* mergeKLists(vector<ListNode*>& a) 
    {
        int n=a.size();
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
            ListNode* temp=a[i];
            while(temp!=NULL)
            {
                pq.push(-temp->val);
                temp=temp->next;
            }
        }
        ListNode* head=new ListNode;
        ListNode* curr=head;
        if(pq.empty())
        {
            return NULL;
        }
        else 
        {
            head->val=-pq.top();
            pq.pop();
        }
        while(!pq.empty())
        {
            ListNode* temp=new ListNode;
            temp->val=-pq.top();
            pq.pop();
            curr->next=temp;
            curr=curr->next;
        }
        return head;
    }
};
