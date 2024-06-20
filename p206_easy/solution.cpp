struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    if (head == nullptr or head->next == nullptr)
      return head;

    ListNode *tempHead = head;
    ListNode *tempNext, *tempPrev = nullptr;

    while (tempHead != nullptr) {
      tempNext = tempHead->next;
      tempHead->next = tempPrev;
      tempPrev = tempHead;

      // traverse forward
      tempHead = tempNext;
    }

    return tempPrev;
  }
};
