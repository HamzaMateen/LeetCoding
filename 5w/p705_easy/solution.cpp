#include <algorithm>
#include <list>
// let's go with naive implementation
class MyHashSet {
  std::list<int> set;

public:
  MyHashSet() {}

  bool contains(int key) {
    for (int elem : set) {
      if (elem == key)
        return true;
    }

    return false;
  }

  void add(int key) {
    if (contains(key))
      return;

    set.push_back(key);
  }

  void remove(int key) {
    bool found = (std::find(set.begin(), set.end(), key)) != set.end();
    if (!found)
      return;

    set.remove(key);
  }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
