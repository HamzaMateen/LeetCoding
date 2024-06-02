#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
  bool isIsomorphic(std::string s, std::string t) {
    // simpler solution that comes to my mind is that
    // if the count of unique characters in given strings
    // is the same then the strings are isomorphic.
    // FAILED: this doesn't work because I haven't taken into account
    //         frequency count of these characters.
    //  Let's try with unordered_map to map char frequencies.

    std::unordered_map<char, int> charFreqMap_s;
    std::unordered_map<char, int> charFreqMap_t;

    for (char ch : s)
      charFreqMap_s[ch] += 1;

    for (char ch : t)
      charFreqMap_t[ch] += 1;

    std::vector<int> charFreqValues_s, charFreqValues_t;

    for (const auto &pair : charFreqMap_s)
      charFreqValues_s.push_back(pair.second);

    for (const auto &pair : charFreqMap_t)
      charFreqValues_t.push_back(pair.second);

    // sort them both
    std::sort(charFreqValues_s.begin(), charFreqValues_s.end());
    std::sort(charFreqValues_t.begin(), charFreqValues_t.end());

    return charFreqValues_s == charFreqValues_t;

    // this one failed too!
  }
};
