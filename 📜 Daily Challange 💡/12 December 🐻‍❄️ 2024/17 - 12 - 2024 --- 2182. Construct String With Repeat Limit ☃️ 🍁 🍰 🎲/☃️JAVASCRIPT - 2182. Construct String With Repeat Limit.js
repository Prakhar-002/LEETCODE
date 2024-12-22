//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2182

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

//? 🧺 Space complexity ➺ O(1)

var repeatLimitedString = function (s, repeatLimit) {
      // Count frequency of each character
      const charFrequency = {};
      for (const char of s) {
            charFrequency[char] = (charFrequency[char] || 0) + 1;
      }

      // Create a max heap as an array, sorted by ASCII values
      const maxHeap = Object.entries(charFrequency)
            .map(([char, count]) => [char.charCodeAt(0), count])
            .sort((a, b) => b[0] - a[0]);

      const result = [];

      // Process the heap
      while (maxHeap.length) {
            // Extract the character with the highest ASCII value
            const [currentCharCode, frequency] = maxHeap.shift();
            const currentChar = String.fromCharCode(currentCharCode);

            // Append the character up to the repeat limit
            const allowedRepeats = Math.min(frequency, repeatLimit);
            result.push(currentChar.repeat(allowedRepeats));

            // Check if there are leftover occurrences of the current character
            if (frequency - allowedRepeats > 0 && maxHeap.length) {
                  // Extract the next character
                  const [nextCharCode, nextFrequency] = maxHeap.shift();
                  const nextChar = String.fromCharCode(nextCharCode);

                  // Append one occurrence of the next character
                  result.push(nextChar);

                  // Push back the next character if it has remaining occurrences
                  if (nextFrequency > 1) {
                        maxHeap.push([nextCharCode, nextFrequency - 1]);
                  }

                  // Push the remaining occurrences of the current character back into the heap
                  maxHeap.push([currentCharCode, frequency - allowedRepeats]);

                  // Re-sort the heap after modification
                  maxHeap.sort((a, b) => b[0] - a[0]);
            }
      }

      // Join the result array into a string and return
      return result.join('');
}
