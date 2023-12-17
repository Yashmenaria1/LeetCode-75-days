class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head != NULL){
            auto odd = head, even = head->next, evenHead = even;

            while(even != NULL && even->next != NULL){
                odd->next = odd->next->next;
                even->next = even->next->next;
                odd = odd->next;
                even = even->next; 
            }
            odd->next = evenHead;
        }
        return head;
    }
};
