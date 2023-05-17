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
    int pairSum(ListNode* head) {
        vector<int>a;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        int n=a.size();
        int sum=a[0]+a[n-1];
        for(int i=0;i<n/2;i++)
        {
            sum=max(sum,a[i]+a[n-i-1]);
        }
        return sum;
    }
};
