//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1865

//? ⌚ Time complexity ➺ O(n + m + q1 + q2 * n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n + m)   m = lem(nums2)

var FindSumPairs = function (nums1, nums2) {
      this.n1 = nums1;
      this.n2 = nums2;
      this.freq = new Map();

      // Initialize frequency map for nums2
      for (let num of nums2) {
            this.freq.set(num, (this.freq.get(num) || 0) + 1);
      }
};

FindSumPairs.prototype.add = function (index, val) {
      let oldVal = this.n2[index];

      // Decrease frequency of old value
      this.freq.set(oldVal, this.freq.get(oldVal) - 1);
      if (this.freq.get(oldVal) === 0) this.freq.delete(oldVal);

      // Update nums2 value
      this.n2[index] += val;

      // Increase frequency of new value
      let newVal = this.n2[index];
      this.freq.set(newVal, (this.freq.get(newVal) || 0) + 1);
};

FindSumPairs.prototype.count = function (tot) {
      let count = 0;

      // For each number in nums1, count how many nums2 elements
      // form the desired sum
      for (let num of this.n1) {
            let complement = tot - num;
            if (this.freq.has(complement)) {
                  count += this.freq.get(complement);
            }
      }

      return count;
};
