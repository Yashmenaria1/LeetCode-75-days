class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL) return NULL;

        if(head -> next == NULL){
            delete head;
            return NULL;
        }
        auto slow = head, fast = head, prev = head;

        while(fast != NULL && fast -> next != NULL){
            if(slow != head) prev = prev -> next;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        prev -> next = slow -> next;
        delete slow;
        return head;
    }
};
