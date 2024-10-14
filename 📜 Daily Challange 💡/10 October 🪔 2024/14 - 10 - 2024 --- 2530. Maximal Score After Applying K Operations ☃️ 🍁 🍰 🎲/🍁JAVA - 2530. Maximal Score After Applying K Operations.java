//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2530

//? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public long maxKelements(int[] nums, int k) {
            // A priority queue prioritizes larger numbers at the top
            PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);

            // integer `num` in the input array `nums`
            for (int num : nums) {
                  // adds it to the priority queue `pq`
                  pq.add(num);
            }

            // `maxScore` that will keep track of the cumulative score
            long maxScore = 0;

            // loop that runs `k` times to perform operations on the top elements
            while (k-- > 0) {
                  // Removes and captures the maximum element from the priority queue
                  int num = pq.remove();

                  // Adds the value of `num` to `maxScore`.
                  maxScore += num;

                  // dividing by 3 but rounding down to the closest integer
                  pq.add((num + 2) / 3); // adds it back to the priority queue
            }

            // returns the calculated maximum score
            return maxScore;
      }
}

