#include <iterator>
#include <regex>
#include <string>
#include <vector>

const char *w = " \t\n\r\f\v";

inline std::string &rtrim(std::string &s, const char *t = w) {
  s.erase(s.find_last_not_of(t) + 1);
  return s;
}

inline std::string &ltrim(std::string &s, const char *t = w) {
  s.erase(0, s.find_first_not_of(t));
  return s;
}

inline std::string &trim(std::string &s, const char *t = w) {
  return ltrim(rtrim(s, t), t);
}

int last_word_length(const std::string &sentence) {
  std::regex word_regex(R"(\b\w+\b)");
  std::vector<std::string> words;

  auto words_begin =
      std::sregex_iterator(sentence.begin(), sentence.end(), word_regex);
  auto words_end = std::sregex_iterator();

  auto it = words_begin;
  for (; std::next(it) != words_end; ++it)
    ;

  return (it->str()).size();
}

class Solution {
public:
  int lengthOfLastWord(std::string s) {
    // trim the input string
    trim(s);
    return last_word_length(s);
  }
};
