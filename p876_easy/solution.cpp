
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *middleNode(ListNode *head) {
    // two passes in this solution.
    int len = 0;
    ListNode *tempHead = head;

    while (tempHead != nullptr) {
      len++;
      tempHead = tempHead->next;
    }

    int mid = len / 2;

    tempHead = head;
    for (int i = 0; i < mid; i++)
      tempHead = tempHead->next;

    return tempHead;
  }
};
