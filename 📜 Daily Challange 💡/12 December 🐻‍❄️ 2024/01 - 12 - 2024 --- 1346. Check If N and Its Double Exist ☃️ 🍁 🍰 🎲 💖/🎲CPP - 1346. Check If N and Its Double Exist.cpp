//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1346

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(arr)

//? 🧺 Space complexity ➺ O(n)

#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
      bool checkIfExist(vector<int>& arr) {
            // Create an unordered_set to store numbers we've seen so far
            unordered_set<int> seen;

            // Iterate through each number in the array
            for (int num : arr) {
                  // Check if the current number's double exists in the set
                  // OR if the current number is even and its half exists in the set
                  if (seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2))) {
                        return true; // If either condition is true, return true
                  }

                  // Add the current number to the set
                  seen.insert(num);
            }

            // If no such pair exists, return false
            return false;
      }
};
