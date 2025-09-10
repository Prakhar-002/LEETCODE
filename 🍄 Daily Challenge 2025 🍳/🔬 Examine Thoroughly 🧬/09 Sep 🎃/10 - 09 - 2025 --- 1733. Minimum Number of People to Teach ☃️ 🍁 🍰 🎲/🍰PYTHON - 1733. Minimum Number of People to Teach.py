#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 1733

#? ⌚ Time complexity ➺ O(m * n)  👉🏻  n = given

#? 🧺 Space complexity ➺ O(m + n) 👉🏻  m = lang

from collections import defaultdict
from typing import List

class Solution:
      def minimumTeachings(self, n: int, languages: List[List[int]], friendships: List[List[int]]) -> int:
            sadUsers = set()    #      Set of users who cannot communicate with their friends

            #      Identify pairs of friends who cannot talk due to language mismatch
            for u, v in friendships:
                  u -= 1        #      Adjust to zero-based indexing
                  v -= 1

                  langSet = set(languages[u])    #      Languages user u knows
                  canTalk = False                #      Flag to mark if they share a language

                  #      Check if user v has any language in common with user u
                  for lang in languages[v]:
                        if lang in langSet:
                              canTalk = True   #      They can communicate
                              break           #      No need to check further

                  #      If no common language, both users are "sad"
                  if not canTalk:
                        sadUsers.add(u)           #      Add user u who cannot communicate with v
                        sadUsers.add(v)           #      Add user v who cannot communicate with u

            language = defaultdict(int)          #      Count how many sad users know each language
            mostKnownLang = 0                    #      Track the language known by max sad users

            #      Count occurrences of each language among sad users
            for user in sadUsers:
                  for lang in languages[user]:
                        language[lang] += 1
                        mostKnownLang = max(mostKnownLang, language[lang])

            #      Minimum people to teach = number of sad users 
            #      minus number who already know the most common language
            return len(sadUsers) - mostKnownLang
