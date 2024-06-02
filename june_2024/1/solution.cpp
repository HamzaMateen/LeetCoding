#include <cstdlib>
#include <functional>
#include <string>

int forEachPair(std::string &s, std::function<int(char, char)> pred) {
  int strScore = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    strScore += pred(s[i], s[i + 1]);
  }

  return strScore;
}

class Solution {
public:
  int scoreOfString(std::string s) {
    auto subAdjacentChars = [](char a, char b) { return abs(a - b); };

    return forEachPair(s, subAdjacentChars);
  }
};
