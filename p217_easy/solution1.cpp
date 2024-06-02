#include <vector>

class Solution {
public:
  // very inefficient solution. Exceeds time limit.
  bool containsDuplicate(std::vector<int> &nums) {
    for (auto it = nums.begin(); it != nums.end(); ++it) {
      for (auto i_it = nums.begin(); i_it != nums.end(); ++i_it) {
        if (it == i_it)
          continue;

        if (*it == *i_it)
          return true;
      }
    }
    return false;
  }
};
