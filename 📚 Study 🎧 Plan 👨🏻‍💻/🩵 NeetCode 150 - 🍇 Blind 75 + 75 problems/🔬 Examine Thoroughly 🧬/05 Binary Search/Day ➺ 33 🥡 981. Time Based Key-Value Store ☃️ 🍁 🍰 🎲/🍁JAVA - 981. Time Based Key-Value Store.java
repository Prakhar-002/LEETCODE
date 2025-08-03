//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 981

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(m * n)

import java.util.*;

class TimeMap {

      // Map to store: key -> list of [value, timestamp]
      private Map<String, List<Pair>> store;

      // Pair class to store value and timestamp
      private class Pair {
            String val;
            int time;

            Pair(String val, int time) {
                  this.val = val;
                  this.time = time;
            }
      }

      public TimeMap() {
            // Initialize the store map
            store = new HashMap<>();
      }

      public void set(String key, String value, int timestamp) {
            // If key doesn't exist, initialize a new list
            store.putIfAbsent(key, new ArrayList<>());

            // Append the new (value, timestamp) pair to the list
            store.get(key).add(new Pair(value, timestamp));
      }

      public String get(String key, int timestamp) {
            // Default return value
            String res = "";

            // Get the list of pairs for the given key
            List<Pair> values = store.getOrDefault(key, new ArrayList<>());

            int l = 0;
            int r = values.size() - 1;

            // Binary search for the latest timestamp <= given timestamp
            while (l <= r) {
                  int m = (l + r) / 2;

                  if (values.get(m).time <= timestamp) {
                        res = values.get(m).val; // Store candidate result
                        l = m + 1; // Search right half
                  } else {
                        r = m - 1; // Search left half
                  }
            }

            return res;
      }
}
