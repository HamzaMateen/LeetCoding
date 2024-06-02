#include <algorithm>
#include <iterator>
#include <set>
#include <vector>

class Solution {
public:
  std::vector<std::vector<int>> findDifference(std::vector<int> &nums1,
                                               std::vector<int> &nums2) {

    std::set<int> nums1_set(nums1.begin(), nums1.end());
    std::set<int> nums2_set(nums2.begin(), nums2.end());

    std::vector<int> diff1, diff2;
    std::set_difference(nums1_set.begin(), nums1_set.end(), nums2_set.begin(),
                        nums2_set.end(), std::back_inserter(diff1));
    std::set_difference(nums2_set.begin(), nums2_set.end(), nums1_set.begin(),
                        nums1_set.end(), std::back_inserter(diff2));

    std::vector<std::vector<int>> answer;

    answer.push_back(diff1);
    answer.push_back(diff2);

    return answer;
  }
};
