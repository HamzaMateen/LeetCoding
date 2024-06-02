#include <unordered_map>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    std::unordered_map<int, int> numFrequencyMap;

    for (auto num : nums)
      numFrequencyMap[num] += 1;

    int sum = 0;
    for (const auto &pair : numFrequencyMap)
      if (pair.second > 1)
        return true;

    return false;
  }
};
