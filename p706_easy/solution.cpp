#include <iostream>

class MyHashMap {
  int *hashMap;

public:
  MyHashMap() {
    this->hashMap = new int[10000];

    // initialize the array with -1 (as an indicator of absense of value)
    for (int i = 0; i < 10000; i++)
      hashMap[i] = -1;
  }

  void put(int key, int value) { hashMap[key] = value; }

  int get(int key) { return hashMap[key]; }

  void remove(int key) { hashMap[key] = -1; }

  ~MyHashMap() { delete[] hashMap; }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main() {
  MyHashMap *obj = new MyHashMap();

  obj->put(10, 13);
  std::cout << obj->get(10) << std::endl;
}
