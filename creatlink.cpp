#include <iostream>

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int value) : val(value), next(nullptr) {}
};

ListNode* mergeSortedLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (l1) {
        current->next = l1;
    }
    if (l2) {
        current->next = l2;
    }

    return dummy->next;
}

int main() {
    // Create the linked lists
    ListNode* list1 = new ListNode(4);
    list1->next = new ListNode(10);
    list1->next->next = new ListNode(15);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(20);

    // Merge the sorted lists
    ListNode* mergedList = mergeSortedLists(list1, list2);

    // Print the merged list
    while (mergedList) {
        std::cout << mergedList->val;
        if (mergedList->next) {
            std::cout << " -> ";
        }
        mergedList = mergedList->next;
    }

    return 0;
}
