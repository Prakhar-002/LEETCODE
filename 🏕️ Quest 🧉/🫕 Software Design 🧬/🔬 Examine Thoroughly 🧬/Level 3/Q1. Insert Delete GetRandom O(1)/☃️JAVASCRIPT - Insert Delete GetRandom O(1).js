//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L3 Q1

//? ⌚ Time complexity ➺ O(1)

//? 🧺 Space complexity ➺ O(1)

class RandomizedSet {
      constructor() {
            // numMap: maps value to its index in numList
            this.numMap = new Map();
            // numList: stores all values in an array for O(1) random access
            this.numList = [];
      }

      insert(val) {
            // Check if val is already present
            const res = !this.numMap.has(val);
            if (res) {
                  // Add val to the map with its index (current end of array)
                  this.numMap.set(val, this.numList.length);
                  // Append val to the array
                  this.numList.push(val);
            }
            return res;
      }

      remove(val) {
            // Check if val is present
            const res = this.numMap.has(val);
            if (res) {
                  // Get index of val in the array
                  const idx = this.numMap.get(val);
                  // Get the last value in the array
                  const lastVal = this.numList[this.numList.length - 1];
                  // Move lastVal to the position of val
                  this.numList[idx] = lastVal;
                  // Remove the last element (val is now overwritten)
                  this.numList.pop();
                  // Update the map: lastVal is now at index idx
                  this.numMap.set(lastVal, idx);
                  // Remove val from the map
                  this.numMap.delete(val);
            }
            return res;
      }

      getRandom() {
            // Return a random element from the array
            const randomIndex = Math.floor(Math.random() * this.numList.length);
            return this.numList[randomIndex];
      }
}
