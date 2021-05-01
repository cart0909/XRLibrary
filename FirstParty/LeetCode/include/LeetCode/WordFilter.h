#ifndef __WORD_FILTER_HEADERFILE__
#define __WORD_FILTER_HEADERFILE__
#include <LeetCode/Types.h>

class WordFilter
{
public:
    WordFilter(vector<string> &words);

    int f(string prefix, string suffix);

private:
    unordered_map<string, int> pre_suf_table;
};

#endif