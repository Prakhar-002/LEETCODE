//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1865

//? ⌚ Time complexity ➺ O(n + m + q1 + q2 * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m)   m = lem(nums2)

class FindSumPairs {
private:
      vector<int> nums1, nums2;
      unordered_map<int, int> freq;

public:
      FindSumPairs(vector<int> &_nums1, vector<int> &_nums2) {
            nums1 = _nums1;
            nums2 = _nums2;

            // Build frequency map for nums2
            for (int num : nums2) {
                  freq[num]++;
            }
      }

      void add(int index, int val) {
            int oldVal = nums2[index];

            // Decrease frequency of old value
            freq[oldVal]--;
            if (freq[oldVal] == 0) {
                  freq.erase(oldVal);
            }

            // Update value and increase new value's frequency
            nums2[index] += val;
            freq[nums2[index]]++;
      }

      int count(int tot) {
            int result = 0;

            // Check for each number in nums1
            for (int num : nums1) {
                  int complement = tot - num;
                  if (freq.count(complement)) {
                        result += freq[complement];
                  }
            }

            return result;
      }
};
