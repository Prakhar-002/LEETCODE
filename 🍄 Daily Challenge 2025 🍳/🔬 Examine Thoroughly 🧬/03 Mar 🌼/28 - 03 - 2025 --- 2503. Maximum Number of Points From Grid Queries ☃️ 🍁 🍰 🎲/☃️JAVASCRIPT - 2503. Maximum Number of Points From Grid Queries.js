//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2503

//? ⌚ Time complexity ➺ O(q log q + (n * m)log(n * m)) 👉🏻  n = len(grid)

//? 🧺 Space complexity ➺ O(n * m) 👉🏻 q = len(queries) 👉🏻  m = len(grid[0])

var maxPoints = function (grid, queries) {
      const rows = grid.length, cols = grid[0].length;

      // Directions for moving: Down, Up, Right, Left
      const directions = [[1, 0], [-1, 0], [0, 1], [0, -1]];

      // Store queries along with their original indices, then sort by query value
      let q = queries.map((val, i) => [val, i]).sort((a, b) => a[0] - b[0]);

      // Use MinHeap for efficient operations
      let minHeap = new MinHeap();
      minHeap.push([grid[0][0], 0, 0]); // Stores (value, row, col)

      // Array to store the result for each query
      let result = new Array(queries.length).fill(0);

      // Set to track visited cells (stores "row,col" as keys)
      let visited = new Set(["0,0"]);

      let points = 0; // Count of reachable cells

      // Process each query
      for (let [limit, idx] of q) {
            // Expand reachable cells while the smallest value is below the current query
            while (minHeap.size() > 0 && minHeap.peek()[0] < limit) {
                  let [val, r, c] = minHeap.pop(); // Remove the smallest element
                  points++;

                  // Explore the four possible directions
                  for (let [dr, dc] of directions) {
                        let nr = r + dr, nc = c + dc;

                        // Check if the next cell is within bounds and not visited
                        if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && !visited.has(`${nr},${nc}`)) {
                              minHeap.push([grid[nr][nc], nr, nc]); // Push into min-heap
                              visited.add(`${nr},${nc}`); // Mark as visited
                        }
                  }
            }

            result[idx] = points; // Store the result for this query
      }

      return result; // Return the final result array
}


class MinHeap {
      constructor() {
            this.heap = [];
      }

      // Push a new element and maintain the min-heap property
      push(val) {
            this.heap.push(val);
            this._heapifyUp();
      }

      // Remove and return the smallest element
      pop() {
            if (this.heap.length === 1) return this.heap.pop();
            const min = this.heap[0];
            this.heap[0] = this.heap.pop();
            this._heapifyDown();
            return min;
      }

      // Return the smallest element without removing it
      peek() {
            return this.heap.length ? this.heap[0] : null;
      }

      size() {
            return this.heap.length;
      }

      _heapifyUp() {
            let index = this.heap.length - 1;
            while (index > 0) {
                  let parentIndex = Math.floor((index - 1) / 2);
                  if (this.heap[parentIndex][0] <= this.heap[index][0]) break;
                  [this.heap[parentIndex], this.heap[index]] = [this.heap[index], this.heap[parentIndex]];
                  index = parentIndex;
            }
      }

      _heapifyDown() {
            let index = 0;
            while (true) {
                  let leftChild = 2 * index + 1;
                  let rightChild = 2 * index + 2;
                  let smallest = index;

                  if (leftChild < this.heap.length && this.heap[leftChild][0] < this.heap[smallest][0]) {
                        smallest = leftChild;
                  }

                  if (rightChild < this.heap.length && this.heap[rightChild][0] < this.heap[smallest][0]) {
                        smallest = rightChild;
                  }

                  if (smallest === index) break;
                  [this.heap[index], this.heap[smallest]] = [this.heap[smallest], this.heap[index]];
                  index = smallest;
            }
      }
}