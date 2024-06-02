#include <algorithm>
#include <string>
#include <unordered_map>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {
    std::unordered_map<char, int> srcCharFrequency;
    std::unordered_map<char, int> dstCharFrequency;

    for (char ch : s) {
      srcCharFrequency[ch] += 1;
    }

    for (char ch : t) {
      dstCharFrequency[ch] += 1;
    }

    return srcCharFrequency == dstCharFrequency;
  }
};
