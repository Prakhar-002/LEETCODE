//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2182

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
      string repeatLimitedString(string s, int repeatLimit) {
            // Count frequency of each character
            unordered_map<char, int> charFrequency;
            for (char ch : s) {
                  charFrequency[ch]++;
            }

            // Create a max heap (priority queue) based on characters
            priority_queue<pair<char, int>> maxHeap;
            for (const auto& [ch, count] : charFrequency) {
                  maxHeap.push({ch, count});
            }

            string result;

            // Process the heap
            while (!maxHeap.empty()) {
                  // Extract the character with the highest frequency and ASCII value
                  auto [currentChar, frequency] = maxHeap.top();
                  maxHeap.pop();

                  // Append the character up to the repeat limit
                  int allowedRepeats = min(frequency, repeatLimit);
                  result.append(allowedRepeats, currentChar);

                  // Check if there are leftover occurrences of the current character
                  if (frequency - allowedRepeats > 0 && !maxHeap.empty()) {
                        // Extract the next character from the heap
                        auto [nextChar, nextFrequency] = maxHeap.top();
                        maxHeap.pop();

                        // Append one occurrence of the next character
                        result.push_back(nextChar);

                        // Push back the next character if it has remaining occurrences
                        if (nextFrequency > 1) {
                              maxHeap.push({nextChar, nextFrequency - 1});
                        }

                        // Push the remaining occurrences of the current character back into the heap
                        maxHeap.push({currentChar, frequency - allowedRepeats});
                  }
            }

            return result;
      }
};
