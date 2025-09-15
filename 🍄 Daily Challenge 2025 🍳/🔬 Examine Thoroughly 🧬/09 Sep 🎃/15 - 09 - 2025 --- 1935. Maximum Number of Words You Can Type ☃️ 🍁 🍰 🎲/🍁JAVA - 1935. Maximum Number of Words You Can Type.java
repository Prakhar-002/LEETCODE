//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1935

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(text)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int canBeTypedWords(String text, String brokenLetters) {
            //      Convert brokenLetters to a set for quick lookup
            Set<Character> broken = new HashSet<>();
            for (char ch : brokenLetters.toCharArray()) {
                  broken.add(ch);
            }

            String[] words = text.split(" ");      //      Split text into words
            int count = 0;                         //      Counter for typeable words

            //      Check each word
            for (String word : words) {
                  boolean hasBroken = false;       //      Flag to check if word contains a broken letter
                  for (char ch : word.toCharArray()) {
                        if (broken.contains(ch)) {
                              hasBroken = true;    //      This word has a broken letter, can't type
                              break;
                        }
                  }

                  if (!hasBroken) {                //      If no broken letters, can type this word
                        count++;
                  }
            }

            return count;                          //      Return how many words can be typed
      }
}
