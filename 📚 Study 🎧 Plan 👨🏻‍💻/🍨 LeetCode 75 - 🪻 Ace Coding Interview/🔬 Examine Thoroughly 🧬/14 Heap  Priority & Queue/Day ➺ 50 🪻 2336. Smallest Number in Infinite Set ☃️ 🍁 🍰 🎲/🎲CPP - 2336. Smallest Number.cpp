//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2336

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <queue>
#include <unordered_set>

using namespace std;

class SmallestInfiniteSet {
private:
      priority_queue<int, vector<int>, greater<int>> pq; // Min-heap
      unordered_set<int> inPQ; // HashSet to track added-back numbers
      int nextNum; // Next smallest number to be returned

public:
      SmallestInfiniteSet() {
            nextNum = 1; // Start from 1
      }

      int popSmallest() {
            if (pq.empty()) {
                  return nextNum++;
            }

            int smallest = pq.top(); // Get smallest element
            pq.pop(); // Remove from priority queue
            inPQ.erase(smallest); // Remove from tracking set
            return smallest;
      }

      void addBack(int num) {
            if (num < nextNum && inPQ.find(num) == inPQ.end()) {
                  pq.push(num); // Insert into min-heap
                  inPQ.insert(num); // Track in set to prevent duplicates
            }
      }
};
