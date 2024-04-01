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
    ListNode* reverseList(ListNode* head) {

	if (head == nullptr || head->next == nullptr) return head;


	ListNode* prev = nullptr;
	ListNode* curr = head;


	while (curr != nullptr) {
		ListNode* tmp = curr->next;	// create temporary var for iteration
		curr->next = prev;		// our next node is going to come before curr
		prev = curr;			// we set the prev node to be current because
						// current is getting iterrated
		curr = tmp;			// iterate current
	}
	return prev;

    }
};
