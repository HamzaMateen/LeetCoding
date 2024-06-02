#include <vector>

class Solution {
public:
  void reverseString(std::vector<char> &s) {
    int m = s.size() / 2;
    int i = 0;

    auto rit = s.rbegin();
    for (auto it = s.begin(); i < m; ++it, ++rit) {
      char temp = *it;
      *it = *rit;
      *rit = temp;

      i++;
    }
  }
};
