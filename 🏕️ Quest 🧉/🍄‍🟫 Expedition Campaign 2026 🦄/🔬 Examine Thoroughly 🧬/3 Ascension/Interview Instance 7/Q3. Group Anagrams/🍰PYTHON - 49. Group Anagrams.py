#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 49

#? ⌚ Time complexity ➺ O(m * n log n) 👉🏻  m = len(strs)

#? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

#* Sorting 

from collections import defaultdict

class Solution:
      def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
            # Create a defaultdict to group anagrams together, using a list as the default value
            res = defaultdict(list)

            # Iterate through each string in the input list
            for s in strs:
                  # Sort the string alphabetically to create a common key for anagrams
                  sortedS = ''.join(sorted(s))

                  # Use the sorted string as the key and append the original string to the corresponding group
                  res[sortedS].append(s)

            # Return the grouped anagrams as a list of lists
            return list(res.values())

#!------------------------------------------------------------------------ 

#? ⌚ Time complexity ➺ O(m * n) 👉🏻  m = len(strs)

#? 🧺 Space complexity ➺ O(m * n)  👉🏻   n = Max(len(s in strs))

#* Hash Table 

from collections import defaultdict

class Solution:
      def groupAnagrams(self, strs):
            # Create a dictionary to group anagrams together
            # The key is a tuple representing the character frequency array
            # The value is a list of strings (anagrams)
            res = defaultdict(list)

            # Iterate through each string in the input list
            for s in strs:
                  # Initialize a character frequency array for 'a' to 'z'
                  count = [0] * 26

                  # Count the frequency of each character in the string
                  for c in s:
                        count[ord(c) - ord('a')] += 1

                  # Use the character frequency array as the key (converted to a tuple)
                  res[tuple(count)].append(s)

            # Return the grouped anagrams as a list of lists
            return list(res.values())
