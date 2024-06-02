#include <set>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    std::set<int> nums_set(nums.begin(), nums.end());
    std::vector<int> num_set_vector(nums_set.begin(), nums_set.end());

    return nums.size() != num_set_vector.size();
  }
};
