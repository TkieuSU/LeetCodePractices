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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev;

        // Check if list only have one element and have non element
        if (head -> next == nullptr || head == nullptr) {
            return nullptr;
        }

        // Fast pointer will loop through with double the speed compared to slow
        // Fast pointer skip 2 spaces at the time so by the time it gets to the end of the list
        // The slow pointer will be at the middle of the list
        while (fast != nullptr && fast -> next != nullptr) {
            prev = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        // Prev is now pointing at the previous node to the middle
        // It will now point at the next node to the middle node
        prev -> next = slow -> next;
        return head;
    }
};
