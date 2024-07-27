#include <algorithm>
#include <vector>
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  int pairSum(ListNode *head) {
    int len = 0;

    ListNode *tempNode = head;
    while (tempNode != nullptr) {
      tempNode = tempNode->next;
      len++;
    }

    int mid = len / 2;
    std::vector<int> twinScores;
    twinScores.reserve(mid);

    tempNode = head;
    for (int i = 0; i < mid; i++) {
      twinScores.emplace_back(tempNode->val);
      tempNode = tempNode->next;
    }

    tempNode = tempNode->next;
    for (int i = mid - 1; i >= 0; i--) {
      twinScores[i] += tempNode->val;
      tempNode = tempNode->next;
    }

    // find the greatest element now
    int maxTwinScore = *std::max_element(twinScores.begin(), twinScores.end());

    return maxTwinScore;
  }
};
