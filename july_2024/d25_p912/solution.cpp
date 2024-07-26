#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> sortArray(std::vector<int> &nums) {
    // i can follow merge sort to solve this one out
    // attempt this one in Haskell too
    // 1. Create N sublists each of one element
    if (nums.size() == 1)
      return nums;

    std::vector<int> sorted_nums =
        std::vector<int>(nums.begin(), std::next(nums.end(), -1));

    for (int i : sorted_nums)
      std::cout << i << ", ";
    std::cout << std::endl;

    sortArray(sorted_nums);

    int pivot = sorted_nums[sorted_nums.size() - 1];
    for (int i = sorted_nums.size() - 2; i >= 0; i--) {
      if (pivot < sorted_nums[i]) {

        sorted_nums[i + 1] = sorted_nums[i];
        sorted_nums[i] = pivot;
      }
    }

    return sorted_nums;
  }
};

int main(int argc, char *argv[]) {
  std::vector<int> vec = {5, 1, 1, 2, 0, 0};
  Solution sol1;

  std::vector<int> ans = sol1.sortArray(vec);

  std::cout << std::endl << "answer: " << std::endl;
  for (int i : ans)
    std::cout << i << ", ";

  std::cout << std::endl;

  return 0;
}
