//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2349

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(unique Index)

//? 🧺 Space complexity ➺ O(n)

class NumberContainers {
      constructor() {
            this.num_idx_set = new Map(); // Maps number to sorted set of indices
            this.idx_num = new Map(); // Maps index to number
      }

      /*
      * Updates the mapping of an index to a new number.
      * If the index was previously associated with a different number,
      * it removes the index from the old number's set.
      */
      change(index, number) {
            if (this.idx_num.has(index)) {
                  let prevNum = this.idx_num.get(index);
                  let set = this.num_idx_set.get(prevNum);
                  
                  set.delete(index); // Remove index from previous number's set

                  // If no more indices exist for previous number, remove the entry
                  if (set.size === 0) {
                        this.num_idx_set.delete(prevNum);
                  }
            }

            // Assign the new number to the index
            this.idx_num.set(index, number);

            // Add the index to the set corresponding to the new number
            if (!this.num_idx_set.has(number)) {
                  this.num_idx_set.set(number, new Set());
            }
            this.num_idx_set.get(number).add(index);
      }

      /*
      * Finds the smallest index associated with the given number.
      * If no index is found, returns -1.
      */
      find(number) {
            if (!this.num_idx_set.has(number) || this.num_idx_set.get(number).size === 0) {
                  return -1;
            }
            return Math.min(...this.num_idx_set.get(number)); // Get the smallest index
      }
}
