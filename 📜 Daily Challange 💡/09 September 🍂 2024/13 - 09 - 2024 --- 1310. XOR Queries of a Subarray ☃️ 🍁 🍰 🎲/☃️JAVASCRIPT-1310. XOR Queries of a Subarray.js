//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1310

//? ⌚ Time complexity ➺ O(n + q) 👉🏻  n = len(arr) q = Len(queries)

//? 🧺 Space complexity ➺ O(n)

var xorQueries = function (arr, queries) {
      // `prefix` is an array initialized with length `arr.length + 1`
      const prefix = new Array(arr.length + 1).fill(0);
      prefix[0] = 0;

      // calculates the cumulative XOR up to that element and stores
      for (let i = 0; i < arr.length; i++) {
            // XOR of the previous element in `prefix` current element `arr[i]`
            prefix[i + 1] = prefix[i] ^ arr[i];
      }

      // For `arr = [1, 3, 4, 8]` : `prefix = [0, 1, 2, 6, 14]`

      // initialized to store the results of each query
      const answer = new Array(queries.length);

      // iterates each query ( array of two integers `[left, right]`) in `queries`
      for (let i = 0; i < queries.length; i++) {
            // To get the XOR of elements from index `left` to `right`
            // Use `prefix[right + 1] ^ prefix[left]`
            const [left, right] = queries[i];
            // `prefix[right + 1]` => XOR of all elements from start up to `right`
            // `prefix[left]` => XOR of all elements from the start up to `left - 1`
            // XORing these two values cancels out the elements before `left`
            answer[i] = prefix[right + 1] ^ prefix[left];
      }

      // returns the `answer` array containing the results for all queries
      return answer;
}

