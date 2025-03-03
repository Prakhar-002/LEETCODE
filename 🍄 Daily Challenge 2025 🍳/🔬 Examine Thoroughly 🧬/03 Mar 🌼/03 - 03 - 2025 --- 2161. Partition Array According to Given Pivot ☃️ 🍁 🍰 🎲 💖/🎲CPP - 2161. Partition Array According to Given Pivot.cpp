//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2161

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

//* One Pass

class Solution {
public:
      vector<int> pivotArray(vector<int>& nums, int pivot) {
            // Step 1: Find the length of the input array
            int N = nums.size();

            // Step 2: Initialize two pointers to handle placing elements
            // 'lessPtr' will place numbers smaller than pivot (from the left side)
            int lessPtr = 0;

            // 'greaterPtr' will place numbers greater than pivot (from the right side)
            int greaterPtr = N - 1;

            // Step 3: Create the result array (same size as nums), initially filled with zeros
            vector<int> partitionArr(N, 0);

            // Step 4: First pass to process elements and categorize them into:
            //        - numbers smaller than pivot (placed at the beginning)
            //        - numbers greater than pivot (placed at the end)
            //        - numbers equal to pivot will be handled later
            // This pass uses two indices simultaneously: 
            // i scans from left to right and j scans from right to left
            for (int i = 0, j = N - 1; i < N && j >= 0; i++, j--) {

                  // If nums[i] is smaller than pivot, place it at 'lessPtr' position
                  if (nums[i] < pivot) {
                        partitionArr[lessPtr++] = nums[i];
                  }

                  // If nums[j] is greater than pivot, place it at 'greaterPtr' position
                  if (nums[j] > pivot) {
                        partitionArr[greaterPtr--] = nums[j];
                  }
            }

            // Step 5: After the first pass, the middle section (between lessPtr and greaterPtr)
            //         should contain all values equal to pivot
            // We fill all those middle positions with the pivot itself
            while (lessPtr <= greaterPtr) {
                  partitionArr[lessPtr++] = pivot;
            }

            // Step 6: Return the fully partitioned array
            return partitionArr;
      }
};

//!---------------------------------------------------------- 

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(1)

//* 3 iteration 

class Solution {
public:
      vector<int> pivotArray(vector<int>& nums, int pivot) {
            // Allocate space for result array
            int N = nums.size();
            vector<int> result(N);

            // Index to track position for insertion
            int index = 0;

            // Step 1: Add all numbers smaller than pivot to result array
            for (int i = 0; i < N; i++) {
                  if (nums[i] < pivot) {
                        result[index++] = nums[i];
                  }
            }

            // Step 2: Add all numbers equal to pivot to result array
            for (int i = 0; i < N; i++) {
                  if (nums[i] == pivot) {
                        result[index++] = nums[i];
                  }
            }

            // Step 3: Add all numbers greater than pivot to result array
            for (int i = 0; i < N; i++) {
                  if (nums[i] > pivot) {
                        result[index++] = nums[i];
                  }
            }

            // Return the rearranged array
            return result;
      }
};


//!---------------------------------------------------------- 

// ? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

// ? 🧺 Space complexity ➺ O(n)

//* 3 Arrays (less, equal, greater)

class Solution {
public:
      vector<int> pivotArray(vector<int>& nums, int pivot) {
            // Vector to store numbers less than pivot
            vector<int> less;
            // Vector to store numbers equal to pivot
            vector<int> equal;
            // Vector to store numbers greater than pivot
            vector<int> greater;

            // Iterate through each number in nums
            for (int n : nums) {
                  if (n < pivot) {
                        less.push_back(n); // Add to 'less' if smaller than pivot
                  } else if (n == pivot) {
                        equal.push_back(n); // Add to 'equal' if equal to pivot
                  } else {
                        greater.push_back(n); // Add to 'greater' if larger than pivot
                  }
            }

            // Combine all vectors into less vector

            less.insert(less.end(), equal.begin(), equal.end());
            less.insert(less.end(), greater.begin(), greater.end());

            // Return the final rearranged array
            return less;
      }
};
