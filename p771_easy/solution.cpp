#include <string>
#include <unordered_map>

class Solution {
public:
  int numJewelsInStones(std::string jewels, std::string stones) {
    std::unordered_map<char, int> myJwlMap;

    // populate the map
    for (const char jwl : jewels)
      myJwlMap[jwl] = 0;

    for (const char stone : stones) {
      if (myJwlMap.find(stone) != myJwlMap.end()) // if is a jewel
        myJwlMap[stone] += 1;
    }

    int jwlCount = 0;
    for (const auto &pair : myJwlMap)
      jwlCount += pair.second;

    return jwlCount;
  }
};
