#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 981

#? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(m * n)

class TimeMap:

      def __init__(self):
            # Initialize the store dictionary where:
            # key -> list of [value, timestamp] pairs (sorted by timestamp)
            self.store = {}

      def set(self, key: str, value: str, timestamp: int) -> None:
            # If key is not present in store, initialize with an empty list
            if key not in self.store:
                  self.store[key] = []

            # Append the [value, timestamp] pair to the list for this key
            self.store[key].append([value, timestamp])

      def get(self, key: str, timestamp: int) -> str:
            res = ""                         # Default return value if no match found
            values = self.store.get(key, []) # Get the list of [value, timestamp] for the key

            l = 0                            # Initialize binary search left pointer
            r = len(values) - 1             # Initialize right pointer

            # Binary search for the latest timestamp <= given timestamp
            while l <= r:
                  m = (l + r) // 2           # Compute mid index

                  if values[m][1] <= timestamp:
                        res = values[m][0]   # Possible candidate, store value
                        l = m + 1            # Try to find a better (closer) timestamp to the right
                  else:
                        r = m - 1            # Search in the left half

            return res                       # Return the best match found (or "" if none)

