//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2438

//? ⌚ Time complexity ➺ O(log n) 👉🏻  Q = len(queries)

//? 🧺 Space complexity ➺ O(log n + Q log mod)

var productQueries = function (n, queries) {
      const mod = 1e9 + 7; // Modulus value to prevent integer overflow and match problem constraint

      // --------------------------------------------------------------
      // Step 1: Extract powers of 2 from the binary representation of n
      // --------------------------------------------------------------
      // In the binary representation of n, each set bit (bit value = 1)
      // corresponds to a power of two that is part of n's decomposition.
      // Example: n = 10 (binary 1010) → powers = [2, 8]
      // We collect these powers in ascending order (smallest power first).
      let powers = [];
      let i = 0;        // Tracks current bit position (represents exponent)
      let temp = n;     // Temporary variable so that shifting doesn't modify n directly
      while (temp > 0) {
            // If the current bit is set, add the corresponding power of two
            if (temp & 1) {
                  powers.push(1 << i); // 1 << i == 2^i
            }
            // Shift right to check the next bit and increment bit position
            temp >>= 1;
            i++;
      }

      // --------------------------------------------------------------
      // Step 2: For each query, multiply the range of powers modulo 'mod'
      // --------------------------------------------------------------
      // Each query is an array [l, r], meaning:
      // multiply powers[l] * powers[l+1] * ... * powers[r] under modulo.
      let res = [];
      for (let [l, r] of queries) {
            let product = 1; // Start with multiplicative identity
            for (let j = l; j <= r; j++) {
                  // Multiply and take modulo at each step to prevent overflow
                  product = (product * powers[j]) % mod;
            }
            // Append the computed product for this query to the results array
            res.push(product);
      }

      // Step 3: Return the results for all queries
      return res;
};
