//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3479

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(bucket)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets) {
            int n = baskets.size();
            int N = 1;

            // Find the smallest power of 2 >= n
            while (N <= n)
                  N <<= 1;

            // Segment tree with size 2 * N
            vector<int> segTree(2 * N);

            // Fill leaf nodes with baskets
            for (int i = 0; i < n; ++i)
                  segTree[N + i] = baskets[i];

            // Build the tree bottom-up
            for (int i = N - 1; i > 0; --i)
                  segTree[i] = max(segTree[2 * i], segTree[2 * i + 1]);

            int count = 0;

            for (int x : fruits) {
                  int index = 1; // Start at root

                  // If fruit doesn't fit in any basket
                  if (segTree[index] < x) {
                        count++;
                        continue;
                  }

                  // Find the leftmost suitable basket
                  while (index < N) {
                        if (segTree[2 * index] >= x)
                              index = 2 * index;
                        else
                              index = 2 * index + 1;
                  }

                  // Mark basket used
                  segTree[index] = -1;

                  // Update the tree upwards
                  while (index > 1) {
                        index >>= 1;
                        segTree[index] = max(segTree[2 * index], segTree[2 * index + 1]);
                  }
            }

            return count;
      }
};
