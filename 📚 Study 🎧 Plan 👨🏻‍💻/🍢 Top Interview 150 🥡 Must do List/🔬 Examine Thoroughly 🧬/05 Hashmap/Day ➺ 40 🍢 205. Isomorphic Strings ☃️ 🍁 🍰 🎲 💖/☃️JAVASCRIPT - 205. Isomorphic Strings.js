//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 205

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var isIsomorphic = function (s, t) {
      const mapST = new Map();  // Mapping from s to t
      const mapTS = new Map();  // Reverse mapping from t to s

      for (let i = 0; i < s.length; i++) {
            const c1 = s[i];  // Character from s
            const c2 = t[i];  // Character from t

            // Check if c1 is already mapped
            if (mapST.has(c1)) {
                  if (mapST.get(c1) !== c2) {
                        return false;  // Mismatch in mapping
                  }
            } else {
                  mapST.set(c1, c2);  // Create new mapping
            }

            // Check reverse mapping
            if (mapTS.has(c2)) {
                  if (mapTS.get(c2) !== c1) {
                        return false;  // Mismatch in reverse mapping
                  }
            } else {
                  mapTS.set(c2, c1);  // Create reverse mapping
            }
      }

      return true;  // All mappings are valid
};
