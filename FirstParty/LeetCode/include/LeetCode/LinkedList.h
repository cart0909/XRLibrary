#ifndef __LINKEDLIST_HEADERFILE__
#define __LINKEDLIST_HEADERFILE__
#include <LeetCode/Types.h>

void print(ListNode *head);
ListNode *nextIndex(ListNode *head, size_t index);
ListNode *reverse(ListNode *head);

/// LeetCode 234. Palindrome Linked List
bool isPalindrome(ListNode *head);

#endif