//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 49

//? ⌚ Time complexity ➺ O(m * n log n) 👉🏻  m = len(strs)

//? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

//* Sorting 

var groupAnagrams = function(strs) {
      // Create a map to group anagrams together
      const res = new Map();

      // Iterate through each string in the input array
      for (const s of strs) {
            // Sort the string alphabetically to create a common key for anagrams
            const sortedS = s.split('').sort().join('');
            
            // If the key doesn't exist in the map, initialize it with an empty array
            if (!res.has(sortedS)) {
                  res.set(sortedS, []);
            }

            // Append the original string to the corresponding group
            res.get(sortedS).push(s);
      }

      // Return the grouped anagrams as an array of arrays
      return Array.from(res.values());
};

//!-------------------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(strs)

//? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

//* Hash Table 

var groupAnagrams = function(strs) {
      // Create a Map to group anagrams together
      // The key is a string representation of the character frequency array
      // The value is an array of strings (anagrams)
      const res = new Map();

      // Iterate through each string in the input array
      for (const s of strs) {
            // Initialize a character frequency array for 'a' to 'z'
            const count = new Array(26).fill(0);

            // Count the frequency of each character in the string
            for (const c of s) {
                  count[c.charCodeAt(0) - 'a'.charCodeAt(0)]++;
            }

            // Convert the character frequency array into a unique key
            const key = count.toString();

            // If the key doesn't exist in the map, add it with a new array
            if (!res.has(key)) {
                  res.set(key, []);
            }

            // Add the current string to the corresponding group of anagrams
            res.get(key).push(s);
      }

      // Return the grouped anagrams as an array of arrays
      return Array.from(res.values());
};
