//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2290

//? ⌚ Time complexity ➺ O(n * m)  👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻  m = len(grid[0])

var minimumObstacles = function (grid) {
      // Directions: up, right, down, left
      dirs = [[-1, 0], [0, 1], [1, 0], [0, -1]];
      const m = grid.length;
      const n = grid[0].length;

      // Initialize the result grid with large values
      const res = Array.from({ length: m }, () => Array(n).fill(Infinity));
      res[0][0] = 0;

      // Min-heap priority queue for the Dijkstra-like algorithm
      const pq = new MinHeap();
      pq.push([0, 0, 0]); // [cost, row, col] -> starting point with 0 obstacles

      while (pq.size() > 0) {
            const [cost, r, c] = pq.pop();

            // If the cost is greater than the best-known cost, skip this cell
            if (cost > res[r][c]) continue;

            // Explore all 4 directions
            for (let i = 0; i < 4; i++) {
                  const nr = r + this.dirs[i][0];
                  const nc = c + this.dirs[i][1];

                  // Check bounds
                  if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                        // If the cell has an obstacle, set weight to 1, else 0
                        const w = grid[nr][nc] === 1 ? 1 : 0;

                        // If a better path is found, update the result and push to the queue
                        if (cost + w < res[nr][nc]) {
                              res[nr][nc] = cost + w;
                              pq.push([cost + w, nr, nc]);
                        }
                  }
            }
      }

      // Return the result at the bottom-right corner
      return res[m - 1][n - 1];
}

// Min-Heap class implementation in JavaScript
class MinHeap {
      constructor() {
            this.heap = [];
      }

      push(item) {
            this.heap.push(item);
            this.bubbleUp();
      }

      pop() {
            if (this.size() === 0) return null;

            const root = this.heap[0];
            const last = this.heap.pop();

            if (this.size() > 0) {
                  this.heap[0] = last;
                  this.bubbleDown();
            }

            return root;
      }

      size() {
            return this.heap.length;
      }

      bubbleUp() {
            let index = this.size() - 1;
            while (index > 0) {
                  const parentIndex = Math.floor((index - 1) / 2);
                  if (this.heap[index][0] >= this.heap[parentIndex][0]) break;

                  [this.heap[index], this.heap[parentIndex]] = [this.heap[parentIndex], this.heap[index]];
                  index = parentIndex;
            }
      }

      bubbleDown() {
            let index = 0;
            const size = this.size();
            while (index < size) {
                  const leftChildIndex = 2 * index + 1;
                  const rightChildIndex = 2 * index + 2;
                  let smallest = index;

                  if (leftChildIndex < size && this.heap[leftChildIndex][0] < this.heap[smallest][0])
                        smallest = leftChildIndex;

                  if (rightChildIndex < size && this.heap[rightChildIndex][0] < this.heap[smallest][0])
                        smallest = rightChildIndex;

                  if (smallest === index) break;

                  [this.heap[index], this.heap[smallest]] = [this.heap[smallest], this.heap[index]];
                  index = smallest;
            }
      }
}