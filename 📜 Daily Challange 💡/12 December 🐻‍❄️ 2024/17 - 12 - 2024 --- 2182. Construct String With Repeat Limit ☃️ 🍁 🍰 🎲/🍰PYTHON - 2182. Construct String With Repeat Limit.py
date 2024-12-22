#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 2182

#? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(s)

#? 🧺 Space complexity ➺ O(1)

import heapq
from typing import Counter

class Solution:
      def repeatLimitedString(self, s: str, repeatLimit: int) -> str:
            # Count the frequency of each character in the input string
            char_frequency = Counter(s)

            # Create a max-heap where each element is (-ASCII_value, count) of a character
            max_heap = [(-ord(char), count) for char, count in char_frequency.items()]

            # Transform the list into a heap
            heapq.heapify(max_heap)

            # Resultant string builder
            result = []

            # Process the heap until it is empty
            while max_heap:
                  # Extract the most frequent character (with the highest ASCII value)
                  neg_char_code, frequency = heapq.heappop(max_heap)
                  current_char = chr(-neg_char_code)

                  # Determine how many times we can append this character (up to the repeat limit)
                  allowed_repeats = min(frequency, repeatLimit)
                  result.append(current_char * allowed_repeats)

                  # Check if there are remaining occurrences of the current character
                  if frequency - allowed_repeats > 0 and max_heap:
                        # Extract the next character from the heap
                        next_neg_char_code, next_frequency = heapq.heappop(max_heap)
                        next_char = chr(-next_neg_char_code)

                        # Append one occurrence of the next character to the result
                        result.append(next_char)

                        # If there are more occurrences left, push the next character back into the heap
                        if next_frequency > 1:
                              heapq.heappush(max_heap, (-ord(next_char), next_frequency - 1))

                        # Push the remaining occurrences of the current character back into the heap
                        heapq.heappush(max_heap, (-ord(current_char), frequency - allowed_repeats))

            # Combine the list into a string and return the result
            return "".join(result)
