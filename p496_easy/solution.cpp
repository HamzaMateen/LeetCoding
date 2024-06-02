#include <vector>

class Solution {
public:
  std::vector<int> nextGreaterElement(std::vector<int> &nums1,
                                      std::vector<int> &nums2) {
    // linear search
    std::vector<int> result;

    for (auto val : nums1) {
      int i = 0;
      bool found = false;
      int nums2_len = nums2.size();

      for (; i < nums2_len; i++) {
        if (nums2[i] == val)
          break;
      }

      for (int j = ++i; j < nums2_len; j++) {
        if (nums2[j] > val) {
          result.push_back(nums2[j]);
          found = true;
          break;
        }
      }

      if (!found)
        result.push_back(-1);
      found = false;
    }

    return result;
  }
};
