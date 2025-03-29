//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2818

//? ⌚ Time complexity ➺ O(N * sqrt(M) + N log N + k log N)

//? 🧺 Space complexity ➺ O(n)  👉🏻  n = len(nums)

import java.util.*;

class Solution {
      public int maximumScore(List<Integer> nums, int k) {
            int N = nums.size();
            final int MOD = 1_000_000_007; // Modulo to prevent overflow
            long maxScore = 1; // Stores the final maximum score

            // Step 1: Compute Prime Scores for Each Number
            int[] primeScores = new int[N];
            for (int i = 0; i < N; i++) {
                  int n = nums.get(i), score = 0;

                  // Find distinct prime factors of `n`
                  for (int f = 2; f * f <= n; f++) {
                        if (n % f == 0) {
                              score++; // Count this prime factor
                              while (n % f == 0) {
                                    n /= f; // Remove all occurrences of factor `f`
                              }
                        }
                  }

                  if (n >= 2)
                        score++; // If `n` is still greater than 2, it's a prime number
                  primeScores[i] = score;
            }

            // Step 2: Compute Left and Right Boundaries for Each Index
            int[] leftBound = new int[N]; // Stores the left boundary of dominance
            int[] rightBound = new int[N]; // Stores the right boundary of dominance
            Arrays.fill(leftBound, -1);
            Arrays.fill(rightBound, N);

            Stack<Integer> stack = new Stack<>();
            for (int i = 0; i < N; i++) {
                  // Maintain decreasing order of prime scores
                  while (!stack.isEmpty() && primeScores[stack.peek()] < primeScores[i]) {
                        int index = stack.pop();
                        rightBound[index] = i; // Set right boundary for previous index
                  }
                  if (!stack.isEmpty())
                        leftBound[i] = stack.peek(); // Set left boundary for the current index
                  stack.push(i);
            }

            // Step 3: Use Max Heap (Priority Queue) to Process Elements in Descending Order
            PriorityQueue<int[]> maxHeap = new PriorityQueue<>((a, b) -> Integer.compare(b[0], a[0]));
            for (int i = 0; i < N; i++) {
                  maxHeap.add(new int[] { nums.get(i), i }); // Insert elements as {value, index}
            }

            // Step 4: Efficiently Handle Large `k`
            while (k > 0 && !maxHeap.isEmpty()) {
                  int[] entry = maxHeap.poll(); // Get the max number
                  int n = entry[0], index = entry[1];

                  // Compute the contribution count from the left and right partitions
                  int leftCnt = index - leftBound[index]; // Elements to the left
                  int rightCnt = rightBound[index] - index; // Elements to the right

                  long count = (long) leftCnt * rightCnt; // Possible operations using this number
                  long operations = Math.min(count, k); // Use as many operations as possible

                  // Avoid unnecessary multiplications if `operations == 0`
                  if (operations > 0) {
                        maxScore = (maxScore * powMod(n, operations, MOD)) % MOD; // Apply modular exponentiation
                        k -= operations; // Reduce remaining operations
                  }
            }

            return (int) maxScore; // Return the final computed score
      }

      // Helper function for modular exponentiation (Efficient power calculation using modulo)
      private long powMod(long base, long exp, int mod) {
            long result = 1;
            while (exp > 0) {
                  if (exp % 2 == 1)
                        result = (result * base) % mod; // Multiply when exp is odd
                  base = (base * base) % mod; // Square the base
                  exp /= 2; // Reduce exponent
            }

            return result;
      }
}
