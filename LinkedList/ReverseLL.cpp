class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if (head == NULL || head->next == NULL) // if empty or if only element
        {
            return head;
        }
        // we'll use the 2 pointers approach because O(1) memory complexity
        ListNode *prev = NULL;
        ListNode *curr = head;

        while (curr != NULL) // while the current node has a value
 
        {
            ListNode *temp = curr->next; // need to save this to move on to the next element
            curr->next = prev;
            prev = curr;
            curr = temp;
            
        }

        return prev;
    }
};
