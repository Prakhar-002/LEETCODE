//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2070

//? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(items)

//? 🧺 Space complexity ➺ O(n + m) 👉🏻 m = len(queries) 

var maximumBeauty = function (items, queries) {
      // Step 1: Sort items based on price (first element in each subarray) in ascending order
      items.sort((a, b) => a[0] - b[0]);

      // Step 2: Create a sorted array of queries, each element is an array [query, index]
      //         where 'index' keeps track of the original position of each query
      const sortedQueries = queries.map((q, i) => [q, i]).sort((a, b) => a[0] - b[0]);

      // Step 3: Initialize an answer array with zeros, sized to the length of queries
      const answer = new Array(queries.length).fill(0);

      // Initialize 'maxBea' to track the maximum beauty encountered so far
      let maxBea = 0;
      // 'j' serves as the pointer to iterate over items
      let j = 0;

      // Step 4: Iterate through each query in the sorted queries array
      for (const [q, i] of sortedQueries) {
            // Update maxBea by iterating through items whose price <= current query value
            while (j < items.length && items[j][0] <= q) {
                  // Update maxBea to the max beauty seen so far
                  maxBea = Math.max(maxBea, items[j][1]);
                  // Move to the next item
                  j++;
            }

            // Step 5: Assign the maximum beauty value found for the query at the original index
            answer[i] = maxBea;
      }

      // Step 6: Return the array of answers corresponding to each query
      return answer;
};

