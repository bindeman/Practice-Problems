//https://leetcode.com/problems/delete-node-in-a-linked-list
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
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val;; //sets the value of current node to the value of next
        ListNode *temp = node -> next; //sets temporary reference to the node after
        node -> next = node -> next -> next; //sets the next to skip the next node
        delete temp; //deletes the next node
        
    }
};