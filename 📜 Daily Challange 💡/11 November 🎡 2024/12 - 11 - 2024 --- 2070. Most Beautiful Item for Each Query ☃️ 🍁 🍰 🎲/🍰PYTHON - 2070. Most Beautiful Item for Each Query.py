#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2070

#? ⌚ Time complexity ➺ O(n log n + m log m) 👉🏻  n = len(items)

#? 🧺 Space complexity ➺ O(n + m) 👉🏻 m = len(queries) 

class Solution:
      def maximumBeauty(self, items: List[List[int]], queries: List[int]) -> List[int]:
            # Step 1: Sort items based on price (first element in each sublist) in ascending order
            items.sort()

            # Step 2: Create a sorted list of queries, each element is a tuple (query, index)
            #         where 'index' keeps track of the original position of each query
            queries = sorted([(q, i) for i, q in enumerate(queries)])

            # Step 3: Initialize an answer list with zeros, sized to the length of queries
            answer = [0] * len(queries)

            # Initialize 'max_bea' to track the maximum beauty encountered so far
            max_bea = 0
            # 'j' serves as the pointer to iterate over items
            j = 0

            # Step 4: Iterate through each query in the sorted queries list
            for q, i in queries:
                  
                  # Update max_bea by iterating through items whose price <= current query value
                  while j < len(items) and items[j][0] <= q:
                        # Update max_bea to the max beauty seen so far
                        max_bea = max(max_bea, items[j][1])
                        # Move to the next item
                        j += 1

                  # Step 5: Assign the maximum beauty value found for the query at the original index
                  answer[i] = max_bea

            # Step 6: Return the list of answers corresponding to each query
            return answer
