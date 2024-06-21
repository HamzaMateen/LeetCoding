#include <cstdlib>

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    // just a get-go solution, solves in O(N^2) time.
    ListNode *tempHeadA = headA;
    ListNode *tempHeadB;

    ListNode *intersectionNode = NULL;
    for (; tempHeadA != NULL; tempHeadA = tempHeadA->next) {
      // check against each one
      for (tempHeadB = headB; tempHeadB != NULL; tempHeadB = tempHeadB->next) {
        if (tempHeadA == tempHeadB) {
          intersectionNode = tempHeadA;
          break;
        }
      }

      if (intersectionNode != NULL)
        break;
    }

    return intersectionNode;
  }
};
