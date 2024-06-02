#include <vector>

class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::vector<int> indices;
    indices.reserve(2);

    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          indices.push_back(i);
          indices.push_back(j);
        }
      }
    }

    return indices;
  }
};
