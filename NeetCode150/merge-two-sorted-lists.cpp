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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // compare list insert smallest and remove from orig. list
        if (list1 == nullptr && list2 == nullptr) return nullptr;

        if (list1 == nullptr) return list2;

        else if (list2 == nullptr) return list1;

        ListNode* tmp = new ListNode(); // create list in format
        ListNode* finalList = tmp;

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                tmp->next = list1;
                list1 = list1->next;
            }
            else {
                tmp->next = list2;
                list2 = list2->next;
            }
            tmp = tmp->next;
        }

        // deal with end of list depending on which ended with nullptr
        if (list1 == nullptr) tmp->next = list2;
        else tmp->next = list1;

        return finalList->next;
    }
};
