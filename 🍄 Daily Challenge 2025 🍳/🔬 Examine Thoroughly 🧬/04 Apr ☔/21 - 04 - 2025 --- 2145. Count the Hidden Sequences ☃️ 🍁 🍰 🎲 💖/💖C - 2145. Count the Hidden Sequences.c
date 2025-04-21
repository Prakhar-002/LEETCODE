//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2145

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(differences)

//? 🧺 Space complexity ➺ O(1)

int numberOfArrays(int* differences, int differencesSize, int lower, int upper) {
      // Track current prefix sum
      long long currentPrefix = 0;

      // Track min and max prefix values
      long long maxPrefix = 0;
      long long minPrefix = 0;

      // Iterate over the differences
      for (int i = 0; i < differencesSize; i++) {
            currentPrefix += differences[i];                        // Update prefix sum
            if (currentPrefix > maxPrefix) maxPrefix = currentPrefix; // Max seen
            if (currentPrefix < minPrefix) minPrefix = currentPrefix; // Min seen
      }

      // Calculate usable range
      long long validRange = upper - lower;

      // Range required by prefix shifts
      long long neededRange = maxPrefix - minPrefix;

      // Calculate how many valid starting values are possible
      long long totalWays = validRange - neededRange + 1;

      // Return result
      return totalWays > 0 ? (int) totalWays : 0;
}
