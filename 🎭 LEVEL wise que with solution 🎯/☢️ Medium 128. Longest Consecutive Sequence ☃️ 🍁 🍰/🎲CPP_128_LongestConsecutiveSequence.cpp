//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 128

//? ⌚ Time complexity -> O(n) 👉 length of nums

//? 🧺 Space complexity -> O(n) 👉 using a set of length n

#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution{
public:
      int longestConsecutive(vector<int> &nums){
            unordered_set<int> numsSet(nums.begin(), nums.end());

            int longestConsecutive = 0;

            for (int n : nums){
                  // check if our sequence is starting from n
                  if (numsSet.find(n - 1) == numsSet.end()){
                        int length = 0;
                        // we'll check our sequence starting from n
                        while (numsSet.find(n + length) != numsSet.end()){
                              // check the sequence
                              length++;
                        }

                        longestConsecutive = max(longestConsecutive, length);
                  }
            }

            return longestConsecutive;
      }
};

//------------------------------------------------------------------------

//* This is wrong ans but better runTime cause we used sorting in our method which take NLogN

//? ⌚ Time complexity -> O(NLogN) 👉 length of nums 

//? 🧺 Space complexity -> O(1) 

class Solution {
public:
      int longestConsecutive(vector<int>& nums) {
            int n = nums.size();
            if (n == 0 || n == 1) {
                  return n;
            }

            // sort first
            sort(nums.begin(), nums.end());
            int i = 1;
            int count = 0;
            int longestConsecutive = 0;

            while (i < n) {
                  // for [0, 1, 1, 2] ans is 3
                  if (nums[i] - nums[i - 1] <= 1) {
                        // increase our count by difference so it can be 0 or 1
                        count += nums[i] - nums[i - 1];
                  } else {
                        // take the max
                        longestConsecutive = max(longestConsecutive, count);
                        count = 0;
                  }
                  i++;
            }

            return max(longestConsecutive, count) + 1;
      }
};