#include <algorithm>
#include <string>
#include <vector>

class Solution {
  struct personInfo {
    std::string name;
    int height;
  };

public:
  std::vector<std::string> sortPeople(std::vector<std::string> &names,
                                      std::vector<int> &heights) {
    // return names sorted in descending order by
    // people's heights
    std::vector<personInfo> personsInfo;
    personsInfo.reserve(names.size());

    std::vector<std::string>::const_iterator namesIter = names.cbegin();
    std::vector<int>::const_iterator heightsIter = heights.cbegin();

    for (; namesIter != names.cend(); namesIter++, heightsIter++) {
      personInfo pi1 = {*namesIter, *heightsIter};
      personsInfo.emplace_back(pi1);
    }

    // sort the information based on height
    auto sorter = [](personInfo a, personInfo b) {
      return b.height < a.height;
    };
    std::sort(personsInfo.begin(), personsInfo.end(), sorter);

    std::vector<std::string> sortedNamesByHeight;
    sortedNamesByHeight.reserve(names.size());

    for (personInfo &info : personsInfo) {
      sortedNamesByHeight.emplace_back(info.name);
    }

    return sortedNamesByHeight;
  }
};
