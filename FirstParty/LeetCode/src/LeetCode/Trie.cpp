#include <LeetCode/Trie.h>

/** Initialize your data structure here. */
Trie::Trie()
{
    root = std::make_unique<TrieNode>();
}

/** Inserts a word into the trie. */
void Trie::insert(string word)
{
    auto parent = root.get();
    for (auto ch : word)
    {
        int c2i = int(ch - 'a');
        auto child = (*parent)[c2i];
        if (child)
        {
            parent = child;
        }
        else
        {
            parent->children[c2i] = std::make_unique<TrieNode>();
            parent = parent->children[c2i].get();
        }
    }
    parent->is_word = true;
}

/** Returns if the word is in the trie. */
bool Trie::search(string word)
{
    auto parent = root.get();
    for (auto ch : word)
    {
        int c2i = int(ch - 'a');
        auto child = (*parent)[c2i];
        if (child)
        {
            parent = child;
        }
        else
        {
            return false;
        }
    }

    return parent->is_word ? true : false;
}

/** Returns if there is any word in the trie that starts with the given prefix. */
bool Trie::startsWith(string prefix)
{
    auto parent = root.get();
    for (auto ch : prefix)
    {
        int c2i = int(ch - 'a');
        auto child = (*parent)[c2i];
        if (child)
        {
            parent = child;
        }
        else
        {
            return false;
        }
    }
    return true;
}