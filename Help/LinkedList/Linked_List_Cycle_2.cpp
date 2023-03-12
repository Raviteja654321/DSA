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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>mp;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(mp[temp])
            {
                return temp;
            }
            mp[temp]++;
            temp=temp->next;
        }
        return NULL;
    }
};


//Your approach of using a hash map to detect the cycle in the linked list is correct.
//However, to find the node where the cycle begins, you can use Floyd's cycle-finding algorithm
//(also known as tortoise and hare algorithm) which uses two pointers - a slow pointer and a fast pointer.

//Initially, both pointers start at the head of the linked list. The slow pointer moves one step at a time while the
//fast pointer moves two steps at a time. If there is a cycle in the linked list, the fast pointer will eventually catch up
//to the slow pointer. Once they meet, we move the slow pointer to the head of the linked list and keep the fast pointer where it is.
//Then, we move both pointers one step at a time until they meet again. The node where they meet is the starting node of the cycle.


ListNode *detectCycle(ListNode *head) {
    if (!head || !head->next) {
        return nullptr; // No cycle if the list is empty or has only one node.
    }
    ListNode *slow = head, *fast = head;
    bool cycleExists = false;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // Cycle exists.
            cycleExists = true;
            break;
        }
    }
    if (!cycleExists) {
        return nullptr; // No cycle.
    }
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow; // Starting node of the cycle.
}
