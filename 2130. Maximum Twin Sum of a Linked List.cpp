class Solution {
public:
    int pairSum(ListNode* head) {
	    ListNode* slow = head;
	    ListNode* fast = head;
	    int maxVal = 0;

	    while(fast && fast -> next){
		    fast = fast -> next -> next;
		    slow = slow -> next;
	    }

	    ListNode *nextNode, *prev = NULL;
	    while (slow) {
		    nextNode = slow->next;
		    slow->next = prev;
		    prev = slow;
		    slow = nextNode;
	    }

	    while(prev){
		    maxVal = max(maxVal, head -> val + prev -> val);
		    prev = prev -> next;
		    head = head -> next;
	    }

	    return maxVal;
    }
};
