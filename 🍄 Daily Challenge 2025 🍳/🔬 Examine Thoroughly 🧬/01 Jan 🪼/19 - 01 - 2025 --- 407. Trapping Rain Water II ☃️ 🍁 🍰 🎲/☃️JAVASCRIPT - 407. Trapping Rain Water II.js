//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 407

//? ⌚ Time complexity ➺ O(m * n log(m * n)) 👉🏻  m = len(heightMap)

//? 🧺 Space complexity ➺ O(m * n)           👉🏻  n = len(heightMap[0])

var trapRainWater = function (heightMap) {
      const rows = heightMap.length;
      const cols = heightMap[0].length;

      // Min-heap to store cells, sorted by height
      const minHeap = new MinPriorityQueue({ priority: cell => cell[0] });
      const visited = Array.from({ length: rows }, () => Array(cols).fill(false));

      // Add all boundary cells to the heap and mark them as visited
      for (let r = 0; r < rows; r++) {
            for (let c = 0; c < cols; c++) {
                  if (r === 0 || r === rows - 1 || c === 0 || c === cols - 1) {
                        minHeap.enqueue([heightMap[r][c], r, c]); // Add boundary cell to heap
                        visited[r][c] = true;                     // Mark as visited
                  }
            }
      }

      let res = 0;        // Variable to store the total trapped water
      let maxH = 0;       // Track the maximum height encountered so far
      const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]; // Four directions: down, up, right, left

      // Process cells in the heap
      while (!minHeap.isEmpty()) {
            const [height, r, c] = minHeap.dequeue().element;
            maxH = Math.max(maxH, height); // Update maximum height seen so far

            // Explore neighbors of the current cell
            for (const [dr, dc] of directions) {
                  const nr = r + dr;
                  const nc = c + dc;

                  // Check if neighbor is valid and not visited
                  if (nr < 0 || nc < 0 || nr >= rows || nc >= cols || visited[nr][nc]) {
                        continue;
                  }

                  // Calculate water trapped at the neighbor
                  res += Math.max(0, maxH - heightMap[nr][nc]);

                  // Add neighbor to heap and mark as visited
                  minHeap.enqueue([heightMap[nr][nc], nr, nc]);
                  visited[nr][nc] = true;
            }
      }

      return res; // Return the total trapped water
}