#ifndef __TRIE_HEADERFILE__
#define __TRIE_HEADERFILE__
#include <LeetCode/Types.h>

class Trie
{
public:
    /** Initialize your data structure here. */
    Trie();

    /** Inserts a word into the trie. */
    void insert(string word);

    /** Returns if the word is in the trie. */
    bool search(string word);

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix);

private:
    struct TrieNode
    {
        bool is_word = false;
        std::array<std::unique_ptr<TrieNode>, 26> children = {nullptr};

        inline TrieNode *operator[](size_t i)
        {
            return children[i].get();
        }
    };

    std::unique_ptr<TrieNode> root = nullptr;
};

#endif