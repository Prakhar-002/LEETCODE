#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2491

#? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(skill)

#? 🧺 Space complexity ➺ O(1)

class Solution:
      def dividePlayers(self, skill: List[int]) -> int:
            # array is sorted in non-decreasing order
            skill.sort()

            # to store the sum of the products of paired skills
            chemistry = 0

            # pointers initialized to the start and end of the sorted array
            weak, strong = 0, len(skill) - 1

            # `maxSkill` used to ensure all pairs have the same sum.
            maxSkill = skill[weak] + skill[strong]

            # loop runs until the `weak` index is less than the `strong` index
            while weak < strong:
                  # if the sum of the current weakest and strongest skills not equals `maxSkill`
                  if skill[weak] + skill[strong] != maxSkill:
                        # returns `-1` indicating it's impossible to form such pairs
                        return -1

                  # Adds the product of `skill[weak]` and `skill[strong]` to `chemistry`
                  # Moves the `weak` pointer to higher skill and the `strong` pointer to lower skill
                  chemistry += skill[weak] * skill[strong]
                  weak += 1
                  strong -= 1

            # returns the computed `chemistry`
            return chemistry

#!------------------------------------------------------------------

from collections import Counter

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(skill)

#? 🧺 Space complexity ➺ O(n)

class Solution:
      def dividePlayers(self, skill: List[int]) -> int:
            # calculate the sum of all skill levels
            total = sum(skill)

            # if the total skill points can not be evenly divided into pairs
            if (2 * total) % len(skill):
                  # return -1 
                  return -1

            # create a dictionary that maps each distinct skill level 
            # to the number of times it appears
            count = Counter(skill)
            # calculates the target sum for each pair of players' skills
            target = (2 * total) // len(skill)
            # used to keep track of the sum of products of skill levels
            chemistry = 0

            # iterates through each skill level `s` in the list `skill`
            for s in skill:
                  #  If the current skill `s` has already been completely paired off
                  if not count[s]:
                        # skip to the next iteration
                        continue

                  # Calculates required skill level of player to pair with the current player
                  diff = target - s

                  #  If there is no player with the required complementary skill level `diff`
                  if not count[diff]:
                        #  it means a pair cannot be formed, so the method returns `-1`
                        return -1

                  # their chemistry is added to the total `chemistry`
                  chemistry += s * diff
                  # Decreases the count of the current skill
                  count[s] -= 1
                  # Decreases the count of the complementary skil
                  count[diff] -= 1

            return chemistry
