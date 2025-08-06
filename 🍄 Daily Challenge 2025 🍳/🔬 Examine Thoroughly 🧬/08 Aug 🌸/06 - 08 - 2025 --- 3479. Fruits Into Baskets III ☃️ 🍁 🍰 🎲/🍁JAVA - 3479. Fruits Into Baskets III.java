//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3479

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
            int n = baskets.length;

            // Calculate the smallest power of 2 >= n to build a complete binary segment
            // tree
            int N = 1;
            while (N <= n)
                  N <<= 1; // same as N = N * 2

            // Create segment tree array with size 2 * N
            int[] segTree = new int[N << 1]; // segTree[0...2*N - 1]

            // Initialize leaf nodes with basket capacities
            for (int i = 0; i < n; i++)
                  segTree[N + i] = baskets[i];

            // Build the segment tree: fill internal nodes with max of children
            for (int i = N - 1; i > 0; i--)
                  segTree[i] = Math.max(segTree[2 * i], segTree[2 * i + 1]);

            int count = 0; // Count of fruits that could not be placed in any basket

            for (int i = 0; i < n; ++i) {
                  int x = fruits[i]; // Current fruit size to place
                  int index = 1; // Start from the root of the segment tree

                  // If root's max is less than fruit size, it can't be placed
                  if (segTree[index] < x) {
                        count++;
                        continue;
                  }

                  // Traverse down the tree to find the leftmost valid basket
                  while (index < N) {
                        if (segTree[index * 2] >= x) {
                              index *= 2; // Go to left child if it has enough space
                        } else {
                              index = index * 2 + 1; // Else go to right child
                        }
                  }

                  // Mark basket as used (set value to -1 at leaf)
                  segTree[index] = -1;

                  // Update ancestors in segment tree to reflect used basket
                  while (index > 1) {
                        index >>= 1; // Move to parent node
                        segTree[index] = Math.max(segTree[2 * index], segTree[2 * index + 1]);
                  }
            }

            return count; // Return number of unplaced fruits
      }
}
