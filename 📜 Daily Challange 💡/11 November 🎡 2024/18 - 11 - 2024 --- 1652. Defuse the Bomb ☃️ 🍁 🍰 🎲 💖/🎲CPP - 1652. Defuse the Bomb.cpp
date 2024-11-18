//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1652

//? ⌚ Time complexity ➺ O(n + k) 👉🏻  n = len(code)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      vector<int> decrypt(vector<int>& code, int k) {
            // Get the length of the code vector
            int N = code.size();

            // Initialize a vector to store the decrypted code
            vector<int> decryptedCode(N, 0);

            // Initialize pointers and the current sum
            int l = 0, curSum = 0;

            // Iterate over the extended range of indices to handle circular behavior
            for (int r = 0; r < N + abs(k); r++) {
                  // Add the current value to the sum (using modulo for circular behavior)
                  curSum += code[r % N];

                  // If the window size exceeds the absolute value of k, remove the leftmost value
                  if (r - l + 1 > abs(k)) {
                        curSum -= code[l % N];
                        l = (l + 1) % N;
                  }

                  // When the window size equals the absolute value of k
                  if (r - l + 1 == abs(k)) {
                        if (k > 0) {
                              // If k is positive, update the value at the (l-1)%N index
                              decryptedCode[(l - 1 + N) % N] = curSum;
                        } else if (k < 0) {
                              // If k is negative, update the value at the (r+1)%N index
                              decryptedCode[(r + 1) % N] = curSum;
                        }
                  }
            }

            // Return the decrypted code vector
            return decryptedCode;
      }
};
