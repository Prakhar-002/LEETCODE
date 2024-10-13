//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 632

//? ⌚ Time complexity ➺ O(n log k) 👉🏻  n = Total elements

//? 🧺 Space complexity ➺ O(k) 👉🏻 k = Number of Lists

#include <vector>
#include <queue>
#include <algorithm>
#include <limits>
using namespace std;

class Solution {
public:
      vector<int> smallestRange(vector<vector<int>>& nums) {
            // Determines how many lists are in `nums`
            int k = nums.size();
            // Initializes `left` and `right` with the first element of the first list
            int left = nums[0][0], right = nums[0][0];
            // Initializes a min-heap to manage the smallest elements across lists
            priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> min_heap;

            // Iterates over each list in `nums`
            for (int i = 0; i < k; ++i) {
                  // Extract the array at every index
                  const auto& numsArr = nums[i];
                  // Updates `left` to be the minimum value encountered so far
                  left = min(left, numsArr[0]);
                  // Updates `right` to be the maximum value encountered so far
                  right = max(right, numsArr[0]);
                  // Pushes a tuple into the min-heap 
                  // 1. containing the first element of each list, 
                  // 2. along with the index of the list (`i`) 
                  // 3. and the index of the element in that list (`0`)
                  min_heap.push({numsArr[0], i, 0});
            }

            // Initializes the smallest range with the current `left` and `right`
            vector<int> smallestRange = {left, right};

            // Continues looping until a return condition is met
            while (true) {
                  // Pops the smallest element (tuple) from `min_heap`
                  // gives the smallest current number (`numsArr`), 
                  // its list index (`i`), and its element index (`idx`)
                  auto [numsArr, i, idx] = min_heap.top();
                  min_heap.pop();
                  // Increments `idx` to move to the next element in the same list
                  ++idx;

                  // If `idx` is equal to the length of the list `nums[i]`
                  if (idx == nums[i].size()) {
                        // means one list is exhausted, and the current smallest range is returned
                        return smallestRange;
                  }

                  // fetches the `next_val`, the next element from the same list
                  int next_val = nums[i][idx];
                  // pushes it into the min-heap
                  min_heap.push({next_val, i, idx});

                  // Updates `right` to be the maximum of the current `right` and `next_val`
                  right = max(right, next_val);
                  // `left` is updated to be the first value of the new heap, which is the smallest
                  left = get<0>(min_heap.top());

                  // if the new range (`right - left`) is smaller than the current `smallestRange`
                  if (right - left < smallestRange[1] - smallestRange[0]) {
                        // updates `smallestRange` with new `left` and `right`
                        smallestRange = {left, right};
                  }
            }
      }
};

