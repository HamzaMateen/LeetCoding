#include <algorithm>
#include <numeric>
#include <vector>

class Solution {
public:
  int missingNumber(std::vector<int> &nums) {
    int maxElem = *std::max_element(nums.begin(), nums.end());
    int minElem = *std::min_element(nums.begin(), nums.end());

    int numsSum = std::accumulate(nums.begin(), nums.end(), 0);

    int completeRangeSum = 0;
    for (int i = minElem; i <= maxElem; i++)
      completeRangeSum += i;

    int resultSum = completeRangeSum - numsSum;

    if (resultSum == 0) {
      if (minElem > 0)
        return 0;
      else
        return maxElem + 1;
    }

    return resultSum;
  }
};
