#include <cstdlib>
#include <unordered_set>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    std::unordered_set<ListNode *> pointerSet;

    while (headA != NULL) {
      pointerSet.insert(headA);
      headA = headA->next;
    }

    for (; headB != NULL; headB = headB->next) {
      if (pointerSet.find(headB) != pointerSet.end())
        return headB;
    }

    return NULL;
  }
};
