//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 345

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(n)

#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
      string reverseVowels(string s) {
            // Set of vowels for easy lookup
            unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

            // Initialize two pointers
            int left = 0, right = s.length() - 1;

            // Use two pointers to find and swap vowels
            while (left < right) {
                  // Move left pointer to the right until a vowel is found
                  while (left < right && vowels.find(s[left]) == vowels.end()) {
                        left++;
                  }

                  // Move right pointer to the left until a vowel is found
                  while (left < right && vowels.find(s[right]) == vowels.end()) {
                        right--;
                  }

                  // If both pointers are at vowels, swap them
                  if (left < right) {
                        swap(s[left], s[right]);

                        // Move the pointers inward to continue checking
                        left++;
                        right--;
                  }
            }

            // Return the modified string
            return s;
      }
};