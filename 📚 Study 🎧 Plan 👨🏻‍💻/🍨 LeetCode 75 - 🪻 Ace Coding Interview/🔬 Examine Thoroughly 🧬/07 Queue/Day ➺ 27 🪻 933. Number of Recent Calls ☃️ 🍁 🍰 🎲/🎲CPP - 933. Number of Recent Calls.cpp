//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 933

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(n) 👉🏻  n = No. of timestamps

#include <queue>
using namespace std;

class RecentCounter {
private:
      queue<int> q; // Queue to store timestamps of requests

public:
      RecentCounter() {
            // Constructor initializes an empty queue
      }

      int ping(int t) {
            // Add the current timestamp to the queue
            q.push(t);

            // Remove timestamps that are outside the 3000 ms window
            while (!q.empty() && q.front() < t - 3000) {
                  q.pop();
            }

            // The size of the queue represents the number of valid requests
            return q.size();
      }
};
