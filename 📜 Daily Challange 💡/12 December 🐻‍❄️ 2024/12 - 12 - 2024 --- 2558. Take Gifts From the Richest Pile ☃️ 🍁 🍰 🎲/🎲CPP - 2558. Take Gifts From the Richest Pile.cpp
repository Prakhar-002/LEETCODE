//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2558

//? ⌚ Time complexity ➺ O((n + k) Log n) 👉🏻  n = len(gifts)

//? 🧺 Space complexity ➺ O(n)

#include <queue>
#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
      long long pickGifts(vector<int>& gifts, int k) {
            // Create a max-heap using a priority queue
            priority_queue<int> pq(gifts.begin(), gifts.end());

            // Perform k operations where the largest gift is replaced with its square root
            while (k-- > 0) {
                  int largest = pq.top(); pq.pop();
                  pq.push(static_cast<int>(floor(sqrt(largest))));
            }

            // Calculate the sum of remaining gifts
            long long giftRemain = 0;
            while (!pq.empty()) {
                  giftRemain += pq.top();
                  pq.pop();
            }

            // Return the total sum of remaining gifts
            return giftRemain;
      }
};
