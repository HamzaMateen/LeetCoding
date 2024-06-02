#include <algorithm>
#include <iterator>
#include <vector>

// Time complexity: O(n x log(n))
// Space complexity: O(n)

class Solution {
public:
  int missingNumber(std::vector<int> &nums) {
    if (nums.empty()) {
      return 0;
    }

    // sort the array
    std::sort(nums.begin(), nums.end());

    std::vector<int> result;
    std::vector<int> completeRange;
    completeRange.reserve(nums.size() + 1);

    for (int i = nums[0]; i <= nums[nums.size() - 1]; i++)
      completeRange.emplace_back(i);

    std::set_difference(completeRange.begin(), completeRange.end(),
                        nums.begin(), nums.end(), std::back_inserter(result));

    if (result.empty()) {
      if (nums[0] > 0)
        return 0;
      else
        return nums.back() + 1;
    }

    return result[0];
  }
};
