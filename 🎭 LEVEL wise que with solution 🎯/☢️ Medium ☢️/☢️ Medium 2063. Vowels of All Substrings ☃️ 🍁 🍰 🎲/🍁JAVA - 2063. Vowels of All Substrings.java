// ! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2063

// ? ⌚ Time complexity ➺ O(n) 👉🏻 n = len(word)

// ? 🧺 Space complexity ➺ O(1)

class Solution {
      public long countVowels(String word) {
            long totalVowelCount = 0; // Stores the total contribution of vowels
            int length = word.length();
            // Set of vowel characters
            HashSet<Character> vowels = new HashSet<>(Arrays.asList('a', 'e', 'i', 'o', 'u')); 

            // Iterate through each character in the word
            for (int i = 0; i < length; i++) {
                  if (vowels.contains(word.charAt(i))) { // Check if the character is a vowel
                        // Calculate its contribution based on the formula
                        totalVowelCount += (long) (i + 1) * (length - i);
                  }
            }

            return totalVowelCount; // Return the total count of vowels in substrings
      }
}
