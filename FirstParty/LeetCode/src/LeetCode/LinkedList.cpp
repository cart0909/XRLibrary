#include <LeetCode/LinkedList.h>

void print(ListNode* head)
{
    ListNode* it = head;
    while(it) {
        std::cout << it->val << " -> ";
        it = it->next;
    }
    std::cout << "null" << std::endl;
}

ListNode* reverse(ListNode* head)
{
    //         0 -> 1 -> 2 -> ... -> n -> null
    // null <- 0 <- 1 <- 2 <- ... <- n
    ListNode *prev = nullptr, *cur = head;

    while(cur) {
        // <- prev    cur -> next ->
        ListNode *next = cur->next;

        // <- prev <- cur    next ->
        cur->next = prev;

        //           prev    cur ->
        prev = cur;
        cur = next;
    }

    return prev;
}

ListNode* nextIndex(ListNode* head, size_t index)
{
    if(!head)
        return nullptr;

    ListNode* it = head;
    for(size_t i = 0; i < index; ++i) {
        it = it->next;
        if(!it)
            break;
    }
    return it;
}

bool isPalindrome(ListNode* head)
{
    int size = 0;
    ListNode dummpy_node;
    dummpy_node.next = head;
    ListNode* it = &dummpy_node;

    while(it->next) {
        ++size;
        it = it->next;
    }

    if(size == 0 || size == 1) {
        return true;
    }

    ListNode *l0 = nextIndex(head, size/2 - 1), *l1 = l0->next;
    l0->next = nullptr;
    l0 = reverse(head);

    ListNode *it0 = l0, *it1 = l1;
    if(size % 2) {
        it1 = it1->next;
    }

    bool is_palindrome = true;
    while(it0 && it1) {
        if(it0->val != it1->val) {
            is_palindrome = false;
            break;
        }
        it0 = it0->next;
        it1 = it1->next;
    }

    reverse(l0);
    l0->next = l1;

    return is_palindrome;
}