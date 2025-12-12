//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest DSA L6.4 Q2

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var watchedVideosByFriends = function (watchedVideos, friends, id, level) {
      const n = friends.length;  // Total people

      // Step 1: BFS setup
      const queue = [id];
      const explored = new Array(n).fill(false);
      explored[id] = true;

      // Step 2: Level-order BFS to reach exactly 'level' distance
      while (queue.length && level > 0) {
            const size = queue.length;
            for (let i = 0; i < size; i++) {
                  const idx = queue.shift();
                  for (const f of friends[idx]) {
                        if (!explored[f]) {
                              queue.push(f);
                              explored[f] = true;
                        }
                  }
            }
            level--;
      }

      // Step 3: Count videos watched by friends at target level
      const count = {};
      for (const idx of queue) {
            for (const video of watchedVideos[idx]) {
                  count[video] = (count[video] || 0) + 1;
            }
      }

      // Step 4: Sort by frequency (asc), then lexicographical (asc)
      return Object.keys(count).sort((a, b) =>
            count[a] === count[b] ? a.localeCompare(b) : count[a] - count[b]
      );
};
