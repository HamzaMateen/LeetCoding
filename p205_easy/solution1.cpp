#include <string>
#include <unordered_map>

class Solution {
public:
  // it works, don't know why?!
  bool isIsomorphic(std::string s, std::string t) {
    std::unordered_map<char, char> s_to_t_map, t_to_s_map;

    int i = 0;
    for (char ch : s) {
      if (s_to_t_map.find(ch) != s_to_t_map.end()) {
        if (s_to_t_map[ch] != t[i])
          return false;
      }

      s_to_t_map[ch] = t[i];
      i++;
    }

    i = 0;
    for (char ch : t) {
      t_to_s_map[ch] = s[i];
      i++;
    }

    return s_to_t_map.size() == t_to_s_map.size();
  }
};

// 0 1 2
// e g g
// a d d
