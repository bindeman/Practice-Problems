//problem: https://leetcode.com/problems/valid-number/
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
    ListNode* reverseList(ListNode* head) {
        ListNode* next = head;    
        ListNode* current = head; 
        ListNode* previous = NULL;
       
        while(next != NULL) {
            next = next -> next; 
            current -> next = previous;
            previous = current;
            current = next;

        }
            //at final number current will be equal to next which will be NULL
            //so return previous
        return previous;
    }
};