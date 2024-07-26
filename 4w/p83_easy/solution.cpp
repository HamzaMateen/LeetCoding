struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
      return head;

    ListNode *prev = head, *curr = head->next, *toBeRemovedNode = nullptr;

    while (curr != nullptr) {
      if (curr->val == prev->val) {
        toBeRemovedNode = curr;
        prev->next = curr->next;
      } else
        prev = prev->next;

      curr = curr->next;

      // delete the duplicate node
      if (toBeRemovedNode != nullptr) {
        delete toBeRemovedNode;
        toBeRemovedNode = nullptr;
      }
    }

    return head;
  }
};
