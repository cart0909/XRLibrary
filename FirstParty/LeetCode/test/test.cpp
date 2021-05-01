#include <gtest/gtest.h>
#include <LeetCode/LeetCode.h>

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