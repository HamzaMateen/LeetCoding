#include <algorithm>
#include <unordered_map>
#include <vector>

class Solution {
public:
  std::vector<int> frequencySort(std::vector<int> &nums) {
    // sort array by increasing frequency
    std::unordered_map<int, int> numFrequency;

    for (int num : nums)
      numFrequency[num] += 1;

    std::sort(nums.begin(), nums.end(), [&numFrequency](int a, int b) {
      // if frequency of a and b is the same, then sort in descending
      // order
      if (numFrequency[a] == numFrequency[b]) {
        return a > b;
      }

      // otherwise sort by increasing order order based on occurence frequency
      return numFrequency[a] < numFrequency[b];
    });

    return nums; // change this
  }
};

/*
 *  1 -> 2
 *  2 -> 3
 *  3 -> 1
 *
 *  1 -> 1
 *  2 -> 2
 *  3 -> 2
 *
 *  sorted in decreasing order
 *
 *  -1 -> 1
 *   5 -> 1
 *   4 -> 2
 *  -6 -> 2
 *   1 -> 3
 * */
