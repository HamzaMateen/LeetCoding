#include <numeric>
#include <vector>

class NumArray {
  std::vector<int> _nums;

public:
  NumArray(std::vector<int> &nums) : _nums(nums) {}

  int sumRange(int left, int right) {
    int sum =
        std::accumulate(_nums.begin() + left, _nums.begin() + right + 1, 0);

    return sum;
  }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
