//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2208

//? ⌚ Time complexity ➺ O(n Log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

var halveArray = function (nums) {
      // Max-Heap PriorityQueue to hold double values (largest first)
      const pq = new MaxPriorityQueue();

      // Calculate the total sum of the array
      let totalSum = nums.reduce((acc, num) => acc + num, 0);

      // Add elements to the priority queue
      nums.forEach(n => pq.enqueue(n));

      let operations = 0;  // Counter to track the number of operations
      const halfSum = totalSum / 2;  // Target sum we need to reach

      // Keep halving the largest elements until the total sum is reduced to half
      while (totalSum > halfSum) {
            let largest = pq.dequeue().element;  // Remove the largest element from the heap
            totalSum -= largest;  // Subtract the largest element from the total sum

            let reduced = largest / 2;  // Halve the largest element
            totalSum += reduced;  // Add the reduced element back to the total sum

            pq.enqueue(reduced);  // Insert the halved element back into the priority queue

            operations++;  // Increment the operation counter
      }

      return operations;  // Return the number of operations performed
}