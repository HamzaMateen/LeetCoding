#include <algorithm>
#include <string>

class Solution {
public:
  int appendCharacters(std::string s, std::string t) {
    int result = t.size();
    int i = 0;

    std::for_each(s.begin(), s.end(), [&result, &i, &t](char ch) {
      if (ch == t[i]) {
        result--;
        i++;
      }
    });

    return result;
  }
};
