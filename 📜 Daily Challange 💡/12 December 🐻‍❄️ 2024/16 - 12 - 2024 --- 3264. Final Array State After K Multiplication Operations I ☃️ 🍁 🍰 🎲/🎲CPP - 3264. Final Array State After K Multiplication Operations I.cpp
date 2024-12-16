//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3264

//? ⌚ Time complexity ➺ O(k log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

class Solution {
public:
      vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
            // Define a custom comparator for the priority queue (min-heap).
            // The elements are sorted by value (ascending). If values are the same,
            // they are sorted by their index.
            auto compare = [](const pair<int, int>& a, const pair<int, int>& b) {
                  if (a.first != b.first) {
                        return a.first > b.first; // Sort by value (min-heap).
                  }
                  return a.second > b.second;    // If values are equal, sort by index.
            };

            // Create a priority queue (min-heap) using the custom comparator.
            priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> pq(compare);

            // Add all elements of the array into the priority queue as {value, index}.
            for (int i = 0; i < nums.size(); i++) {
                  pq.emplace(nums[i], i);
            }

            // Perform `k` operations, updating the smallest element in the priority queue.
            while (k-- > 0) {
                  // Remove the smallest element from the priority queue.
                  auto state = pq.top();
                  pq.pop();

                  // Update the value of the element by multiplying it with `multiplier`.
                  int updatedValue = state.first * multiplier;

                  // Add the updated element back to the priority queue.
                  pq.emplace(updatedValue, state.second);

                  // Update the original array with the new value at the corresponding index.
                  nums[state.second] = updatedValue;
            }

            // Return the updated array.
            return nums;
      }
};

// !----------------------------------------------------------------------

// ? ⌚ Time complexity ➺ O(n * k) 👉🏻 n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
            // Perform k iterations to transform the smallest element in the array
            while (k-- > 0) {
                  int minIndex = 0; // Index of the smallest element

                  // Find the index of the smallest element in the array
                  for (int i = 1; i < nums.size(); i++) {
                        if (nums[i] < nums[minIndex]) {
                              minIndex = i; // Update minIndex if a smaller element is found
                        }
                  }

                  // Multiply the smallest element by the multiplier
                  nums[minIndex] *= multiplier;
            }

            // Return the modified array
            return nums;
      }
};
