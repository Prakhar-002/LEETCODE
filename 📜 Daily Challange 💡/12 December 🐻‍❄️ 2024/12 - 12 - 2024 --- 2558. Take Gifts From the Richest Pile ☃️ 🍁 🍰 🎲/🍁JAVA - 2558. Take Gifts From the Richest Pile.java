//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2558

//? ⌚ Time complexity ➺ O((n + k) Log n) 👉🏻  n = len(gifts)

//? 🧺 Space complexity ➺ O(n)

import java.util.*;

class Solution {
      public long pickGifts(int[] gifts, int k) {
            // Create a max-heap using a priority queue
            PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b - a);

            // Add all gifts to the priority queue
            for (int gift : gifts) {
                  pq.add(gift);
            }

            // Perform k operations where the largest gift is replaced with its square root
            while (k-- > 0) {
                  // Remove the largest gift, take its square root, floor it, and add it back
                  pq.add((int) Math.floor(Math.sqrt(pq.poll())));
            }

            // Calculate the sum of remaining gifts
            long giftRemain = 0;
            for (Integer gift : pq) {
                  giftRemain += gift;
            }

            // Return the total sum of remaining gifts
            return giftRemain;
      }
}
