// Delete the middle node of the linked list:
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) return nullptr;

        ListNode* slowPointer = head;
        ListNode* fastPointer = head;
        ListNode* prev = nullptr;

        while (fastPointer != nullptr && fastPointer->next != nullptr) {
            prev = slowPointer;
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;
        }
        prev->next = slowPointer->next;
        delete slowPointer;

        return head;
    }
};
