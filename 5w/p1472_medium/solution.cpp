#include <algorithm>
#include <string>
#include <vector>

class BrowserHistory {
  std::vector<std::string> history;
  int currURLIndex;

public:
  BrowserHistory(std::string homepage) : currURLIndex(0) {
    history.push_back(homepage);
  }

  void visit(std::string url) {
    if (currURLIndex < history.size() - 1) {
      history.erase(history.begin() + currURLIndex + 1, history.end());
    }

    history.push_back(url);
    currURLIndex++;
  }

  std::string back(int steps) {
    int maxSteps = std::min(steps, currURLIndex);

    currURLIndex -= maxSteps;
    currURLIndex = std::max(currURLIndex, 0);

    return history[currURLIndex];
  }

  std::string forward(int steps) {
    int diff = history.size() - 1 - currURLIndex;
    int maxSteps = std::min(steps, diff);

    currURLIndex += maxSteps;
    currURLIndex = std::min(static_cast<int>(history.size()) - 1, currURLIndex);

    return history[currURLIndex];
  }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * if (i <= steps || obj != null)
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
