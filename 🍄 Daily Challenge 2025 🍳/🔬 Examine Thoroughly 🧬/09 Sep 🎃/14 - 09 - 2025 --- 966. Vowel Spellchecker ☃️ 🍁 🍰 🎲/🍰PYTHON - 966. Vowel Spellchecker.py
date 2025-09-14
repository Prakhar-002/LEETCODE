#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 966

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(wordlist + queries)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def spellchecker(self, wordlist: List[str], queries: List[str]) -> List[str]:
            # Helper function: Replace all vowels with '*' for flexible matching
            def deVowel(word):
                  return "".join("*" if ch in "aeiou" else ch for ch in word)

            # Set for exact match lookups
            exact = set(wordlist)
            # Maps lowercased words to their first occurrence for case-insensitive match
            caseInsensitive = {}
            # Maps devoweled, lowercased words to their first occurrence for vowel-error match
            consonant = {}

            for word in wordlist:
                  wordLower = word.lower()
                  # Store the original word for first-time case-insensitive match if not already present
                  caseInsensitive.setdefault(wordLower, word)
                  # Store the original word for devoweled match if not already present
                  consonant.setdefault(deVowel(wordLower), word)

            # Function to check each query against rules in order
            def solve(query):
                  if query in exact:
                        return query              # Exact match found

                  queryLower = query.lower()
                  if queryLower in caseInsensitive:
                        return caseInsensitive[queryLower]    # Case-insensitive match found

                  queryDeVow = deVowel(queryLower)
                  if queryDeVow in consonant:
                        return consonant[queryDeVow]          # Vowel error match found

                  return ""                                   # No match found

            # Return results for all queries by applying rules in order
            return list(map(solve, queries))
