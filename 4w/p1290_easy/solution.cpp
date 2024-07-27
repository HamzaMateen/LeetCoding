#include <cmath>
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  int getDecimalValue(ListNode *head) {
    int decimalValue = 0;
    int digitCount = 0;

    ListNode *tempHead = head;
    for (; tempHead != nullptr; tempHead = tempHead->next)
      digitCount += 1;

    tempHead = head;
    for (int i = digitCount - 1; i >= 0; i--) {
      decimalValue += pow(2, i) * tempHead->val;
      tempHead = tempHead->next;
    }

    return decimalValue;
  }
};
