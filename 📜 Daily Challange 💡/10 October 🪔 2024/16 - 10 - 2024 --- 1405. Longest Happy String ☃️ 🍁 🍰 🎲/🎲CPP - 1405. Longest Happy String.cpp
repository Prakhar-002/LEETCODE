//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1405

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = a + b + c

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
      string longestDiverseString(int a, int b, int c) {
            // Initialize an empty string to store the result and a max heap to maintain the counts of characters.
            string happyString = "";
            priority_queue<pair<int, char>> maxHeap;

            // Push the counts of 'a', 'b', and 'c' into the max heap
            if (a > 0) maxHeap.push({a, 'a'});
            if (b > 0) maxHeap.push({b, 'b'});
            if (c > 0) maxHeap.push({c, 'c'});

            // Loop while there are still characters available in the heap.
            while (!maxHeap.empty()) {
                  // Pop the character with the highest remaining count.
                  auto [count, ch] = maxHeap.top();
                  maxHeap.pop();

                  // Check if the last two characters in the result are the same as the current character.
                  // If they are, we need to avoid adding the same character again to prevent three consecutive occurrences.
                  if (happyString.size() > 1 && happyString[happyString.size()-1] == ch && happyString[happyString.size()-2] == ch) {
                        // If there's no other character available, break the loop as it's not possible to proceed.
                        if (maxHeap.empty()) {
                              break;
                        }

                        // Otherwise, pop the character with the second-highest remaining count.
                        auto [count2, ch2] = maxHeap.top();
                        maxHeap.pop();
                        happyString += ch2;  // Append the second character to the result.
                        count2--;  // Decrease the count.

                        // If the second character still has remaining occurrences, push it back into the heap.
                        if (count2 > 0) {
                              maxHeap.push({count2, ch2});
                        }
                  } else {
                        // If the last two characters are not the same, append the current character to the result.
                        happyString += ch;
                        count--;  // Decrease the count.
                  }

                  // If the current character still has remaining occurrences, push it back into the heap.
                  if (count > 0) {
                        maxHeap.push({count, ch});
                  }
            }

            // Return the constructed happy string.
            return happyString;
      }
};

//!----------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻 n = a + b + c

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      string longestDiverseString(int a, int b, int c) {
            // Initialize a string to build the resulting string
            string result;

            // Total length of the string will be the sum of a, b, and c
            int totalLength = a + b + c;

            // Initialize counters to keep track of consecutive occurrences of 'a', 'b', and 'c'
            int continuousA = 0, continuousB = 0, continuousC = 0;

            // Loop until we have used up all characters
            for (int i = 0; i < totalLength; i++) {

                  // Check if 'a' can be added based on its count and the rules:
                  // - 'a' is the most frequent letter remaining
                  // - Or if 'b' or 'c' has been used twice consecutively and 'a' is still available
                  if ((a >= b && a >= c && continuousA != 2)
                              || (continuousB == 2 && a > 0)
                              || (continuousC == 2 && a > 0)) {
                        // Append 'a' to the result
                        result += 'a';
                        // Decrease the count of 'a'
                        a--;
                        // Increase the counter for consecutive 'a's and reset other counters
                        continuousA++;
                        continuousB = 0;
                        continuousC = 0;
                  }

                  // Check if 'b' can be added based on its count and the rules:
                  // - 'b' is the most frequent letter remaining
                  // - Or if 'a' or 'c' has been used twice consecutively and 'b' is still available
                  else if ((b >= a && b >= c && continuousB != 2)
                              || (continuousA == 2 && b > 0)
                              || (continuousC == 2 && b > 0)) {
                        // Append 'b' to the result
                        result += 'b';
                        // Decrease the count of 'b'
                        b--;
                        // Increase the counter for consecutive 'b's and reset other counters
                        continuousB++;
                        continuousA = 0;
                        continuousC = 0;
                  }

                  // Check if 'c' can be added based on its count and the rules:
                  // - 'c' is the most frequent letter remaining
                  // - Or if 'a' or 'b' has been used twice consecutively and 'c' is still available
                  else if ((c >= a && c >= b && continuousC != 2)
                              || (continuousB == 2 && c > 0)
                              || (continuousA == 2 && c > 0)) {
                        // Append 'c' to the result
                        result += 'c';
                        // Decrease the count of 'c'
                        c--;
                        // Increase the counter for consecutive 'c's and reset other counters
                        continuousC++;
                        continuousA = 0;
                        continuousB = 0;
                  }
            }

            // Return the final built string
            return result;
      }
};

