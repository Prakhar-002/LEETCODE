//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2349

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(unique Index)

//? 🧺 Space complexity ➺ O(n)

var NumberContainers = function () {
      // Maps a number to a set of indices where the number is assigned.
      this.num_map = {};

      // Caches the smallest index for each number to optimize the 'find' method.
      this.num_map_cache = {};

      // Maps an index to the number it is currently associated with.
      this.idx_map = {};
};

// Updates the index to a new number or reassigns the index to the same number.
NumberContainers.prototype.change = function (index, number) {
      // If the index already has a number assigned.
      if (index in this.idx_map) {
            const old_num = this.idx_map[index];

            // If the number is unchanged, do nothing.
            if (old_num == number) return;

            // Remove the index from the old number's set.
            const set = this.num_map[old_num];
            set.delete(index);

            // If the index is the smallest for the old number and it's removed, clear the cache.
            if (old_num in this.num_map_cache && index == this.num_map_cache[old_num]) {
                  delete this.num_map_cache[old_num];
            }
      }

      // Update the index to the new number.
      this.idx_map[index] = number;

      // Create a new set for the number if it doesn't exist and add the index.
      this.num_map[number] ||= new Set();
      this.num_map[number].add(index);

      // Update the cached smallest index for the number if necessary.
      if (number in this.num_map_cache) {
            this.num_map_cache[number] = Math.min(index, this.num_map_cache[number]);
      }
};

// Finds the smallest index associated with the given number.
NumberContainers.prototype.find = function (number) {
      // If no indices are associated with the number, return -1.
      if (!this.num_map[number] || this.num_map[number].size <= 0) {
            return -1;
      }

      // Return the cached smallest index if it exists.
      if (number in this.num_map_cache) {
            return this.num_map_cache[number];
      }

      // Otherwise, sort the indices and find the smallest.
      const arr = [...this.num_map[number].values()].sort((a, b) => a - b);

      // Cache the smallest index for future reference.
      this.num_map_cache[number] = arr[0];

      return arr[0];
};
