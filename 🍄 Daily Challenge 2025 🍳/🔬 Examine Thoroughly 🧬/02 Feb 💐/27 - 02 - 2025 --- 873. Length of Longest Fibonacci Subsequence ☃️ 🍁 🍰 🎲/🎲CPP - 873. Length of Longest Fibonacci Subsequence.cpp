//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 873

//? ⌚ Time complexity ➺ O(n ^ 2) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_set>
using namespace std;

class Solution {
public:
      int lenLongestFibSubseq(vector<int>& arr) {
            // Use unordered_set to store array elements for fast lookup
            unordered_set<int> arr_set(arr.begin(), arr.end());

            // Variable to store the maximum subsequence length
            int maxFibLength = 0;

            // Outer loop to choose the first number
            for (int i = 0; i < arr.size() - 1; i++) {
                  // Inner loop to choose the second number
                  for (int j = i + 1; j < arr.size(); j++) {
                        // Set the initial two numbers of the subsequence
                        int prev = arr[i], cur = arr[j];

                        // Calculate the next number in the sequence
                        int nxt = prev + cur;

                        // Initial subsequence length is 2
                        int length = 2;

                        // Continue extending the subsequence if the next number exists
                        while (arr_set.count(nxt)) {
                              // Increase the length of the subsequence
                              length++;

                              // Shift numbers forward
                              prev = cur;
                              cur = nxt;

                              // Calculate the next number
                              nxt = prev + cur;

                              // Update maximum length found so far
                              maxFibLength = max(maxFibLength, length);
                        }
                  }
            }

            // Return the length of the longest Fibonacci-like subsequence found
            return maxFibLength;
      }
};
