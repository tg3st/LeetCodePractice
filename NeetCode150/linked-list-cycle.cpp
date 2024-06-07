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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> seenNodes;

        if (head == nullptr) return false;
        
        while (head != nullptr) {
            if (seenNodes.find(head) == seenNodes.end()) {
                seenNodes.insert(head)
            }
            else {
                return true;
            }
            head = head->next;
        }
        return false;
    }
};
