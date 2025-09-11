#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2785

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(1)

from collections import Counter

class Solution:
      def sortVowels(self, s: str) -> str:
            #      Count frequency only for vowels
            vowCount = Counter()            #      Tracks count for each vowel character

            vowels = 'aeiouAEIOU'           #      String containing all possible vowels

            #      Iterate through input and count vowels
            for ch in s:
                  if ch in vowels:
                        vowCount[ch] += 1   #      Track frequency of each vowel

            #      Sorted string of all vowels (uppercase first, then lowercase)
            sortedVowel = "AEIOUaeiou"
            ans = []                        #      List for constructing final output
            j = 0                           #      Pointer in sortedVowel string

            #      Traverse the input string and substitute vowels in sorted order
            for i in range(len(s)):
                  if not s[i] in vowels:
                        ans.append(s[i])    #      Non-vowel, append as is
                  else:
                        #      Find next available vowel, with remaining count
                        while j < len(sortedVowel) and vowCount[sortedVowel[j]] == 0:
                              j += 1

                        ans.append(sortedVowel[j])         #      Place smallest available vowel
                        vowCount[sortedVowel[j]] -= 1      #      Decrease count after use

            #      Combine list back to a string and return
            return ''.join(ans)

#!----------------------------------------------------------------------------------------------- 

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def sortVowels(self, s: str) -> str:
            vowels = 'AEIOUaeiou'        #      String containing all vowel letters

            vows = []                    #      List to collect vowels from input

            #      Iterate through input string and collect vowels
            for ch in s:
                  if ch in vowels:
                        vows.append(ch)  #      Add vowel character to vows

            vows.sort()                  #      Sort vowels alphabetically

            i = 0                        #      Index for vowels in sorted order

            t = []                       #      List to build output string

            #      Reconstruct the string with sorted vowels
            for ch in s:
                  if ch in vowels:
                        t.append(vows[i])   #      Substitute vowel with sorted one
                        i += 1
                  else:
                        t.append(ch)        #      Keep consonant as is

            return "".join(t)            #      Convert list to final string
