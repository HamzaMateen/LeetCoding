#include <string>
#include <vector>

class Solution {
public:
  std::string reverseVowels(std::string s) {
    std::vector<int> vowelLocations;
    std::string vowels = "";

    int x = 0;
    for (char ch : s) {
      switch (ch) {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        vowels += ch;
        vowelLocations.push_back(x);
        break;
      }

      x++;
    }

    for (int i = vowels.size() - 1, j = 0; i >= 0; i--, j++) {
      s[vowelLocations[j]] = vowels[i];
    }

    return s;
  }
};
