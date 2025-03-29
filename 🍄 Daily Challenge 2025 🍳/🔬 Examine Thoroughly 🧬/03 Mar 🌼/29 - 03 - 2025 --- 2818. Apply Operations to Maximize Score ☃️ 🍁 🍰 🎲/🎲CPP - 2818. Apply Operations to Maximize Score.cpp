//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2818

//? ⌚ Time complexity ➺ O(N * sqrt(M) + N log N + k log N)

//? 🧺 Space complexity ➺ O(n)  👉🏻  n = len(nums)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
      int maximumScore(vector<int>& nums, int k) {
            int N = nums.size();
            const int MOD = 1'000'000'007; // Modulo to prevent overflow
            long long maxScore = 1; // Stores the final maximum score

            // Step 1: Compute Prime Scores for Each Number
            vector<int> primeScores(N);
            for (int i = 0; i < N; i++) {
                  int n = nums[i], score = 0;

                  // Find distinct prime factors of `n`
                  for (int f = 2; f * f <= n; f++) {
                        if (n % f == 0) {
                              score++; // Count this prime factor
                              while (n % f == 0) {
                                    n /= f; // Remove all occurrences of factor `f`
                              }
                        }
                  }

                  if (n >= 2) score++; // If `n` is still greater than 2, it's a prime number
                  primeScores[i] = score;
            }

            // Step 2: Compute Left and Right Boundaries for Each Index
            vector<int> leftBound(N, -1);  // Stores the left boundary of dominance
            vector<int> rightBound(N, N);  // Stores the right boundary of dominance

            stack<int> st; // Monotonic decreasing stack
            for (int i = 0; i < N; i++) {
                  // Maintain decreasing order of prime scores
                  while (!st.empty() && primeScores[st.top()] < primeScores[i]) {
                        int index = st.top();
                        st.pop();
                        rightBound[index] = i; // Set right boundary for previous index
                  }
                  if (!st.empty()) leftBound[i] = st.top(); // Set left boundary for the current index
                  st.push(i);
            }

            // Step 3: Use Max Heap (Priority Queue) to Process Elements in Descending Order
            priority_queue<pair<int, int>> maxHeap;
            for (int i = 0; i < N; i++) {
                  maxHeap.push({nums[i], i}); // Insert elements as {value, index}
            }

            // Step 4: Efficiently Handle Large `k`
            while (k > 0 && !maxHeap.empty()) {
                  auto [n, index] = maxHeap.top();
                  maxHeap.pop(); // Get the max number

                  // Compute the contribution count from the left and right partitions
                  int leftCnt = index - leftBound[index];   // Elements to the left
                  int rightCnt = rightBound[index] - index; // Elements to the right

                  long long count = (long long) leftCnt * rightCnt; // Possible operations using this number
                  long long operations = min(count, (long long) k); // Use as many operations as possible

                  // Avoid unnecessary multiplications if `operations == 0`
                  if (operations > 0) {
                        maxScore = (maxScore * powMod(n, operations, MOD)) % MOD; // Apply modular exponentiation
                        k -= operations; // Reduce remaining operations
                  }
            }

            return (int) maxScore; // Return the final computed score
      }

private:
      // Helper function for modular exponentiation (Efficient power calculation using modulo)
      long long powMod(long long base, long long exp, int mod) {
            long long result = 1;
            while (exp > 0) {
                  if (exp % 2 == 1) result = (result * base) % mod; // Multiply when exp is odd
                  base = (base * base) % mod; // Square the base
                  exp /= 2; // Reduce exponent
            }

            return result;
      }
};
