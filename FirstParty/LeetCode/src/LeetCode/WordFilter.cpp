#include <LeetCode/WordFilter.h>

WordFilter::WordFilter(vector<string> &words)
{
    int weight = 0;
    for (auto &word : words)
    {
        // word: "apple"
        // "_"
        // "a_"
        // "ap_"
        // "app_"
        // "appl_"
        // "apple_"
        // "_e"
        // "a_e"
        // "ap_e"
        // "..."
        // "_le"
        // "a_le"
        // "ap_le"
        // "..."
        // "apple_apple"
        pre_suf_table["_"] = weight;
        for (auto pre_it = word.begin(); pre_it != word.end(); ++pre_it)
        {
            pre_suf_table[std::string(word.begin(), pre_it + 1) + "_"] = weight;
        }

        for (auto suf_it = word.rbegin(); suf_it != word.rend(); ++suf_it)
        {
            pre_suf_table["_" + std::string(suf_it.base() - 1, word.end())] = weight;
        }

        for (auto suf_it = word.rbegin(); suf_it != word.rend(); ++suf_it)
        {
            for (auto pre_it = word.begin(); pre_it != word.end(); ++pre_it)
            {
                pre_suf_table[std::string(word.begin(), pre_it + 1) + "_" +
                              std::string(suf_it.base() - 1, word.end())] = weight;
            }
        }

        ++weight;
    }
}

int WordFilter::f(string prefix, string suffix)
{
    std::string key = prefix + "_" + suffix;
    auto it = pre_suf_table.find(key);
    return it != pre_suf_table.end() ? it->second : -1;
}