#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  std::vector<int> vec = {2, 5, 1};
  std::vector<int> sub =
      std::vector<int>(vec.begin(), std::next(vec.end(), -1));

  for (int val : sub)
    std::cout << val << ", ";

  std::cout << std::endl;

  ;
  return 0;
}
