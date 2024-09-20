//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 287

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
using namespace std;

class Solution {
public:
      int findDuplicate(vector<int>& nums) {
            // `slow = 0` and `fast = 0` are two pointers
            // initialized at the start of the vector `nums`.
            int slow = 0;
            int fast = 0;

            // do-while loop continues until the slow and fast pointers meet
            do {
                  // `slow` pointer moves one step at a time
                  slow = nums[slow];
                  // `fast` pointer moves two steps at a time
                  fast = nums[nums[fast]];
            } while (slow != fast);

            // `newSlow = 0` is initialized
            // This pointer will be used to find the entrance to the cycle
            int newSlow = 0;

            // while loop continues until both pointers meet at the entrance of the cycle
            while (newSlow != slow) {
                  // `slow` move one step at a time within the vector
                  slow = nums[slow];
                  // `newSlow` move one step at a time within the vector
                  newSlow = nums[newSlow];
            } 

            // the entrance to the cycle is the duplicate number in the vector
            return slow;
      }
};

