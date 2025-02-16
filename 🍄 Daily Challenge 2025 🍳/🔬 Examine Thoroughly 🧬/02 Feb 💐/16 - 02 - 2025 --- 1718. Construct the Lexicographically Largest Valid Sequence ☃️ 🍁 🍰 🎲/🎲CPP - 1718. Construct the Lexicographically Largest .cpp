//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1718

// ? ⌚ Time complexity ➺ O(n)

// ? 🧺 Space complexity ➺ O(n)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> constructDistancedSequence(int n) {
            // Initialize the result sequence with size (2 * n - 1), filled with 0s
            vector<int> resSeq(n * 2 - 1, 0);

            // Boolean array to track used numbers (1 to n)
            vector<bool> isNumberUsed(n + 1, false);

            // Start backtracking from index 0
            backtracking(0, resSeq, isNumberUsed, n);
            return resSeq;
      }

private:
      bool backtracking(int i, vector<int>& resSeq, vector<bool>& isNumberUsed, int n) {
            // If the sequence is fully filled, return true
            if (i == resSeq.size()) {
                  return true;
            }

            // Skip already filled positions and move to the next
            if (resSeq[i] != 0) {
                  return backtracking(i + 1, resSeq, isNumberUsed, n);
            }

            // Try placing numbers from n down to 1 for lexicographically largest sequence
            for (int num = n; num >= 1; num--) {
                  // Skip if the number is already used
                  if (isNumberUsed[num]) {
                        continue;
                  }

                  // If num > 1, ensure it can be placed at both required positions
                  if (num > 1 && (i + num >= resSeq.size() || resSeq[i + num] != 0)) {
                        continue;
                  }

                  // Mark the number as used and place it at index i
                  isNumberUsed[num] = true;
                  resSeq[i] = num;

                  // If num > 1, also place it at (i + num) index
                  if (num > 1) {
                        resSeq[i + num] = num;
                  }

                  // Find the next empty position to continue placement
                  int j = i + 1;
                  while (j < resSeq.size() && resSeq[j] != 0) {
                        j++;
                  }

                  // Recursively attempt to construct the remaining sequence
                  if (backtracking(j, resSeq, isNumberUsed, n)) {
                        return true;
                  }

                  // Undo placement (backtrack)
                  isNumberUsed[num] = false;
                  resSeq[i] = 0;

                  if (num > 1) {
                        resSeq[i + num] = 0;
                  }
            }

            // If no valid placement is found, return false
            return false;
      }
};
