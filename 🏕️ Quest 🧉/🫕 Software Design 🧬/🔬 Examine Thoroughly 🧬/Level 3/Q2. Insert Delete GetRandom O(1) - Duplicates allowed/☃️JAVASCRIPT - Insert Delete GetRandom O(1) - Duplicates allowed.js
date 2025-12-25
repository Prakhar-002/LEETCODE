//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q2

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class RandomizedCollection {
      constructor() {
            // Array to store all values (including duplicates) for O(1) random access
            this.numList = [];
            // Map: value → Set of indices where it appears in numList
            this.idx = new Map();
      }

      /**
       * Inserts a value to the collection. Returns true if the collection did not
       * already contain the specified element.
       */
      insert(val) {
            // If val is not in the map, create a new Set for its indices
            if (!this.idx.has(val)) {
                  this.idx.set(val, new Set());
            }
            // Add the current index (end of array) to the set of indices for this value
            this.idx.get(val).add(this.numList.length);
            // Append the value to the array
            this.numList.push(val);
            // Return true if this was the first occurrence of the value (set size is 1)
            return this.idx.get(val).size === 1;
      }

      /**
       * Removes a value from the collection. Returns true if the collection contained
       * the specified element.
       */
      remove(val) {
            // If val is not in the collection, return false
            if (!this.idx.has(val) || this.idx.get(val).size === 0) {
                  return false;
            }
            // Get any index where val appears (we remove one occurrence)
            const remove_idx = this.idx.get(val).values().next().value;
            // Remove this index from val’s set
            this.idx.get(val).delete(remove_idx);
            // Get the last value in the array
            const last = this.numList[this.numList.length - 1];
            // Move the last value to the position of the value being removed
            this.numList[remove_idx] = last;
            // Update the index set for the last value:
            //   - Add the index remove_idx to last’s set
            this.idx.get(last).add(remove_idx);
            //   - Remove the old last index (length-1) from last’s set
            this.idx.get(last).delete(this.numList.length - 1);
            // Remove the last element from the array (the value we just moved is now duplicated at the end)
            this.numList.pop();
            return true;
      }

      /** Get a random element from the collection. */
      getRandom() {
            // Return a random element from the array
            const randomIndex = Math.floor(Math.random() * this.numList.length);
            return this.numList[randomIndex];
      }
}
