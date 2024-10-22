//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2583

//? ⌚ Time complexity ➺ O(n + h Log k) 👉🏻  n = Total Nodes

//? 🧺 Space complexity ➺ O(k) h = Height of tree

var kthLargestLevelSum = function (root, k) {
      // Initialize a queue with the root node to perform level order traversal
      const q = [root];

      // Initialize a min-heap
      const minHeap = new MinPriorityQueue();

      // Loop to process each level in the binary tree
      while (q.length > 0) {
            // Initialize the sum of the current level's nodes
            let levelSum = 0n;

            // Loop through all nodes in the current level
            const levelSize = q.length;
            for (let i = 0; i < levelSize; i++) {
                  // Remove the node from the front of the queue
                  const node = q.shift();
                  // Add the node's value to the current level sum
                  levelSum += BigInt(node.val);

                  // Add the left child to the queue if it exists
                  if (node.left !== null) {
                        q.push(node.left);
                  }

                  // Add the right child to the queue if it exists
                  if (node.right !== null) {
                        q.push(node.right);
                  }
            }

            // Add the current level sum to the min-heap
            minHeap.enqueue(levelSum, Number(levelSum));

            // If the heap size exceeds k, remove the smallest element
            if (minHeap.size() > k) {
                  minHeap.dequeue();
            }
      }

      // If there are fewer than k levels, return -1; 
      // otherwise, return the kth largest level sum
      return minHeap.size() < k ? -1 : Number(minHeap.front().element);
};