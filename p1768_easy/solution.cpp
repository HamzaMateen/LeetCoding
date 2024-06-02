#include <cstdlib>
#include <string>

class Solution {
public:
  std::string mergeAlternately(std::string word1, std::string word2) {
    bool isFstLonger = word1.length() > word2.length();
    int sizeDiff = word1.size() - word2.size();
    int absSizeDiff = abs(sizeDiff);

    int commonSize = isFstLonger ? word2.length() : word1.length();

    std::string result;
    int x;

    for (x = 0; x < commonSize; x++) {
      result += word1[x];
      result += word2[x];
    }

    if (isFstLonger) {
      for (; x < commonSize + absSizeDiff; x++)
        result += word1[x];
    } else {
      for (; x < commonSize + absSizeDiff; x++)
        result += word2[x];
    }

    return result;
  }
};
