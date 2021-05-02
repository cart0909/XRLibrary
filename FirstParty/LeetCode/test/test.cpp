#include <gtest/gtest.h>
#include <LeetCode/LeetCode.h>

TEST(LeetCode, nextIndex)
{
    std::vector<ListNode> nodes(5);
    for (int i = 0; i < 5; ++i)
    {
        nodes[i].val = i;
        if (i != 4)
        {
            nodes[i].next = &nodes[i + 1];
        }
    }

    auto it = nextIndex(&nodes[0], 3);
    EXPECT_EQ(it->val, 3);
    EXPECT_EQ(it->next->val, 4);
    EXPECT_EQ(it->next->next, nullptr);
}

TEST(LeetCode, reverse)
{
    std::vector<ListNode> nodes(5);
    for (int i = 0; i < 5; ++i)
    {
        nodes[i].val = i;
        if (i != 4)
        {
            nodes[i].next = &nodes[i + 1];
        }
    }

    auto new_head = reverse(&nodes[0]);
    EXPECT_EQ(new_head->val, 4);
    EXPECT_EQ(new_head->next->val, 3);
    EXPECT_EQ(new_head->next->next->val, 2);
    EXPECT_EQ(new_head->next->next->next->val, 1);
    EXPECT_EQ(new_head->next->next->next->next->val, 0);
    EXPECT_EQ(new_head->next->next->next->next->next, nullptr);
}

TEST(LeetCode, Implement_Trie_Prefix_Tree_208)
{
    Trie trie;
    trie.insert("apple");
    EXPECT_TRUE(trie.search("apple"));
    EXPECT_FALSE(trie.search("app"));
    EXPECT_TRUE(trie.startsWith("app"));
    trie.insert("app");
    EXPECT_TRUE(trie.search("app"));
}

TEST(LeetCode, Prefix_and_Suffix_Search_745)
{
    vector<string> words = {"apple"};
    auto obj = std::make_unique<WordFilter>(words);
    EXPECT_EQ(0, obj->f("a", "e"));
    EXPECT_EQ(-1, obj->f("p", ""));
}