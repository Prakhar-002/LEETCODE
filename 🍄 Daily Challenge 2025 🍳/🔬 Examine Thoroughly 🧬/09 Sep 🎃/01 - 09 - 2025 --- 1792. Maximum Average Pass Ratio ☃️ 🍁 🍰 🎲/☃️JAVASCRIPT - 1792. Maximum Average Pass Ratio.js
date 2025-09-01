//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1792

//? ⌚ Time complexity ➺ O(k * log(n) + n) 👉🏻  n = len(classes)

//? 🧺 Space complexity ➺ O(n)

// ----------------------------------------------------------
// Calculate gain from adding one passing student to a class
// ----------------------------------------------------------
function calcGain(passes, total) {
      return (passes + 1) / (total + 1) - passes / total;
}

// ----------------------------------------------------------
// MaxHeap implementation sorting by gain descending
// ----------------------------------------------------------
class MaxHeap {
      constructor() {
            this.heap = [];
      }
      size() {
            return this.heap.length;
      }
      swap(i, j) {
            [this.heap[i], this.heap[j]] = [this.heap[j], this.heap[i]];
      }
      push(val) {
            this.heap.push(val);
            this._bubbleUp(this.heap.length - 1);
      }
      pop() {
            if (this.size() === 0) return null;
            const max = this.heap[0];
            const end = this.heap.pop();
            if (this.size() > 0) {
                  this.heap[0] = end;
                  this._bubbleDown(0);
            }
            return max;
      }
      _bubbleUp(idx) {
            while (idx > 0) {
                  const parent = Math.floor((idx - 1) / 2);
                  if (this.heap[parent][0] >= this.heap[idx][0]) break;
                  this.swap(parent, idx);
                  idx = parent;
            }
      }
      _bubbleDown(idx) {
            const n = this.size();
            while (true) {
                  let largest = idx;
                  const left = 2 * idx + 1;
                  const right = 2 * idx + 2;
                  if (left < n && this.heap[left][0] > this.heap[largest][0]) largest = left;
                  if (right < n && this.heap[right][0] > this.heap[largest][0]) largest = right;
                  if (largest === idx) break;
                  this.swap(idx, largest);
                  idx = largest;
            }
      }
}

// ----------------------------------------------------------
// Build a max heap from classes' initial gains
// ----------------------------------------------------------
function buildHeap(classes) {
      const heap = new MaxHeap();
      for (const [passes, total] of classes) {
            const gain = calcGain(passes, total);
            heap.push([gain, passes, total]);
      }
      return heap;
}

// ----------------------------------------------------------
// Assign extra students greedily by maximizing incremental gain
// ----------------------------------------------------------
function distributeStudents(heap, extraStudents, totalClasses) {
      for (let i = 0; i < extraStudents; i++) {
            let [gain, passes, total] = heap.pop();
            passes++;
            total++;
            heap.push([calcGain(passes, total), passes, total]);
      }

      let totalRatio = 0;
      while (heap.size() > 0) {
            const [_, passes, total] = heap.pop();
            totalRatio += passes / total;
      }

      return totalRatio / totalClasses;
}

// ----------------------------------------------------------
// Main function to compute the max average pass ratio
// ----------------------------------------------------------
function maxAverageRatio(classes, extraStudents) {
      const heap = buildHeap(classes);
      return distributeStudents(heap, extraStudents, classes.length);
}
