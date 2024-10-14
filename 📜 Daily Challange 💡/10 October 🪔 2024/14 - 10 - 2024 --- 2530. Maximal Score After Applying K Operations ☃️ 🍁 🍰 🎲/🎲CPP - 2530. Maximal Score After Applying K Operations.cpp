//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2530

//? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <queue>
#include <cmath>

class Solution {
public:
      long long maxKelements(vector<int>& nums, int k) {
            // A priority queue prioritizes larger numbers at the top
            priority_queue<int> pq;

            // integer `num` in the input vector `nums`
            for (int num : nums) {
                  // adds it to the priority queue `pq`
                  pq.push(num);
            }

            // `maxScore` that will keep track of the cumulative score
            long long maxScore = 0;

            // loop that runs `k` times to perform operations on the top elements
            while (k-- > 0) {
                  //  captures the maximum element from the priority queue
                  int num = pq.top();
                  // Removes the maximum element from the priority queue
                  pq.pop();

                  // Adds the value of `num` to `maxScore`.
                  maxScore += num;

                  // dividing by 3 but rounding down to the closest integer
                  pq.push((num + 2) / 3); // adds it back to the priority queue
            }

            // returns the calculated maximum score
            return maxScore;
      }
};

