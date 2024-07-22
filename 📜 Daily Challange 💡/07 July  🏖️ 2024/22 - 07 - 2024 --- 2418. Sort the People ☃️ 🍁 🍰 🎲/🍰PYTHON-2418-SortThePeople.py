#! https://github.com/Prakhar-002/LEETCODE

# Todo 📌 QUESTION NUMBER 2418

#? ⌚ Time complexity -> O(NLogN) 👉🏻 Build in sort

#? 🧺 Space complexity -> O(n) 👉🏻 people heights array 

class Solution:
      def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
            # first map height with their name 
            height_name_map = {}

            for height, name in zip(heights, names):
                  # map height : name
                  height_name_map[height] = name

            # sorted people height
            people_heights = []

            # traverse in reverse order with sorted height 
            for height in reversed(sorted(heights)):
                  # append the corresponding name assigned with height
                  people_heights.append(height_name_map[height])

            return people_heights