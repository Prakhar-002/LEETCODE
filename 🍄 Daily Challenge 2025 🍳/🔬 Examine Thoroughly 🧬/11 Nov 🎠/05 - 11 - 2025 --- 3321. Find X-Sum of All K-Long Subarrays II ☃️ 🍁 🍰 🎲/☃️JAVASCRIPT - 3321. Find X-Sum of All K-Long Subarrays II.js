//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3321

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

const { AvlTree } = require("datastructures-js");

class Helper {
      constructor(x) {
            this.x = x;          // Number of top elements to track
            this.result = 0n;    // Running total of top x (frequency * value) pairs using BigInt

            // Comparator to sort pairs primarily by frequency, then by value
            const comparator = (a, b) => {
                  if (a[0] !== b[0]) {
                        return a[0] - b[0];
                  }
                  return a[1] - b[1];
            };

            // AVL trees to maintain top x pairs (large) and others (small)
            this.large = new AvlTree(comparator);
            this.small = new AvlTree(comparator);

            // Map to keep track of current frequency for each number
            this.occ = new Map();
      }

      // Insert a number into the sliding window
      insert(num) {
            // Get current frequency or 0 if unseen
            const currentFreq = this.occ.get(num) || 0;
            if (currentFreq > 0) {
                  // Remove old pair with previous frequency
                  this.internalRemove([currentFreq, num]);
            }

            const newFreq = currentFreq + 1;
            this.occ.set(num, newFreq);
            // Insert new pair with updated frequency
            this.internalInsert([newFreq, num]);
      }

      // Remove a number from the sliding window
      remove(num) {
            const currentFreq = this.occ.get(num);
            if (currentFreq === undefined || currentFreq === 0) {
                  return; // Number not present, no action needed
            }
            // Remove current frequency pair
            this.internalRemove([currentFreq, num]);
            const newFreq = currentFreq - 1;
            if (newFreq > 0) {
                  this.occ.set(num, newFreq);
                  // Reinsert with decreased frequency
                  this.internalInsert([newFreq, num]);
            } else {
                  // Remove from occurrence map if frequency zero
                  this.occ.delete(num);
            }
      }

      // Return the current total sum of top x pairs as Number
      get() {
            return Number(this.result);
      }

      // Insert a pair into the large or small AVL tree accordingly
      internalInsert(p) {
            const [freq, value] = p;
            const minLarge = this.large.min();

            // Insert into large if large is not full or pair is larger than smallest in large
            if (
                  this.large.count() < this.x ||
                  (minLarge && this.comparePairs(p, minLarge.getValue()) > 0)
            ) {
                  // Add to running total
                  this.result += BigInt(freq) * BigInt(value);
                  this.large.insert(p);

                  // If large exceeds size x, move smallest from large to small
                  if (this.large.count() > this.x) {
                        const smallestLarge = this.large.min();
                        if (smallestLarge) {
                              const value = smallestLarge.getValue();
                              this.result -= BigInt(value[0]) * BigInt(value[1]);
                              this.large.remove(value);
                              this.small.insert(value);
                        }
                  }
            } else {
                  // Otherwise insert into small tree
                  this.small.insert(p);
            }
      }

      // Remove a pair from the large or small AVL tree
      internalRemove(p) {
            const [freq, value] = p;
            if (this.large.has(p)) {
                  // Remove contribution from total sum
                  this.result -= BigInt(freq) * BigInt(value);
                  this.large.remove(p);

                  // Promote largest from small to large if available
                  if (this.small.count() > 0) {
                        const largestSmall = this.small.max();
                        if (largestSmall) {
                              const value = largestSmall.getValue();
                              this.result += BigInt(value[0]) * BigInt(value[1]);
                              this.small.remove(value);
                              this.large.insert(value);
                        }
                  }
            } else {
                  // Remove from small tree
                  this.small.remove(p);
            }
      }

      // Comparator function used for pair comparison
      comparePairs(a, b) {
            if (a[0] !== b[0]) {
                  return a[0] - b[0];
            }
            return a[1] - b[1];
      }
}

// Function to find top x sum in each sliding window of size k
var findXSum = function (nums, k, x) {
      const helper = new Helper(x);
      const ans = [];

      for (let i = 0; i < nums.length; i++) {
            helper.insert(nums[i]);
            if (i >= k) {
                  helper.remove(nums[i - k]);
            }
            if (i >= k - 1) {
                  ans.push(helper.get());
            }
      }

      return ans;
};
