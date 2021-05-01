#ifndef __LEETCODE_TYPES_HEADERFILE__
#define __LEETCODE_TYPES_HEADERFILE__
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <memory>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif